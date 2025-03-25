NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_PATH = libs/libft
LIBFT = $(LIBFT_PATH)/libft.a

HEADERS = -I ./libs -I $(LIBFT_PATH)

SRCS =	src/main.c src/control/parser.c src/utils/error.c src/utils/utils.c src/utils/lst_managment.c \
		src/moves/push.c src/moves/r_rotate.c src/moves/rotate.c src/moves/swap.c src/algorithm/is_sorted.c \
		src/algorithm/setter.c src/algorithm/push_swap.c

OBJS = $(SRCS:$(SRCDIR)%.c=$(OBJDIR)%.o)
SRCDIR = src/
OBJDIR = obj/

all : $(LIBFT) $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(HEADERS) -o $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $@
	mkdir ./obj/control ./obj/utils ./obj/moves ./obj/algorithm

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	$(RM) obj
	make -C $(LIBFT_PATH) clean

fclean:
	$(RM) obj $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all
