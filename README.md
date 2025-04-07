# push_swap-42MalagaProyect

## 📌 Descripción

`push_swap` es un proyecto de la escuela 42 cuyo objetivo es ordenar una pila de enteros utilizando un conjunto limitado de operaciones, con el menor número de movimientos posible. El proyecto se divide en dos partes:

1. Un programa en C llamado `push_swap`, que toma una lista de enteros como argumento y muestra por la salida estándar la secuencia de operaciones necesarias para ordenarlos.
2. Un **checker** (opcional pero útil para pruebas), que recibe una lista de operaciones y verifica si el resultado es una pila ordenada correctamente.

## 🧠 Objetivo

Implementar un algoritmo de ordenamiento optimizado que use únicamente las siguientes operaciones permitidas sobre dos pilas (`a` y `b`):

### Operaciones permitidas

- **Swap**
  - `sa`: intercambia los dos primeros elementos de `a`
  - `sb`: intercambia los dos primeros elementos de `b`
  - `ss`: `sa` y `sb` al mismo tiempo
- **Push**
  - `pa`: toma el primer elemento de `b` y lo pone en `a`
  - `pb`: toma el primer elemento de `a` y lo pone en `b`
- **Rotate**
  - `ra`: rota `a` hacia arriba
  - `rb`: rota `b` hacia arriba
  - `rr`: `ra` y `rb` al mismo tiempo
- **Reverse Rotate**
  - `rra`: rota `a` hacia abajo
  - `rrb`: rota `b` hacia abajo
  - `rrr`: `rra` y `rrb` al mismo tiempo

## ⚙️ Compilación

```bash
git clone https://github.com/erico-ke/push_swap-42MalagaProyect.git push_swap
cd push_swap
make
```

Esto generará el ejecutable `push_swap`.

## 🧪 Uso

```bash
./push_swap 3 2 1
```

Este comando imprimirá una secuencia de instrucciones que ordenará la pila `[3, 2, 1]` utilizando las operaciones permitidas.

Ejemplo:

```
sa
rra
```

### 🧾 Verificación con checker

Puedes usar el `checker` para validar si la secuencia de instrucciones es correcta:

```bash
ARG="3 2 1"
./push_swap $ARG | ./checker $ARG
```

Salida esperada: `OK` si está ordenado correctamente, `KO` si no.

## 🛠 Estructura del proyecto

```
push_swap/
│
├── src/
│   ├── main.c
|   ├── push_swap.h
│   ├── algorithm/
|   |        ├── is_sorted.c
|   |        ├── push_swap.c
|   |        └── setter.c
│   ├── control/
|   |        └── parser.c
│   ├── moves/
|   |        ├── push.c
|   |        ├── rotate.c
|   |        ├── r_rotate.c
|   |        └── swap.c
│   └── utils/
|            ├── error.c
|            ├── lst_managment.c
|            └── utils.c
├── src/libft
│
├── Makefile
├── checker_linux
└── README.md
```

## 👨‍💻 Autor

- **Nombre:** Elias Rico Kergaravat
- **GitHub:** https://github.com/erico-ke

---

> Proyecto realizado como parte del programa de 42 Network.
