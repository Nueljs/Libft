🧰 Libft — My Custom C Standard Library

Bienvenido a Libft, mi implementación personal de funciones esenciales de la librería estándar de C, desarrollada como parte del proyecto de la 42 School.
Este repositorio contiene funciones recreadas desde cero, respetando el comportamiento original y buscando una comprensión profunda de la memoria, punteros y estructuras de datos.

⭐ Objetivo del proyecto

El objetivo principal de Libft es construir una biblioteca sólida, reutilizable y segura, que permita entender cómo funcionan internamente funciones básicas del lenguaje C:

Manipulación de memoria

Manejo de strings

Comprobación de caracteres

Estructuras de datos (bonus)

Funciones auxiliares útiles en futuros proyectos

📦 Contenido de la biblioteca
🔹 Parte 1 — Funciones de libc

Reimplementación de funciones clásicas como:

memset, bzero, memcpy, memmove, memchr

strlen, strlcpy, strlcat, strchr, strrchr

isdigit, isalpha, isalnum, isascii, isprint

toupper, tolower

atoi

🔹 Parte 2 — Funciones adicionales

Funciones útiles para el manejo avanzado de strings y memoria:

substr, strjoin, split

calloc, strdup

itoa, strtrim, strmapi, striteri

🔹 Bonus — Listas enlazadas

Implementación completa de una linked list con funciones como:

lstnew

lstadd_front

lstadd_back

lstsize

lstlast

lstdelone

lstclear

lstiter

lstmap

🛠️ Cómo compilar

Clona el repositorio:

git clone https://github.com/<tu_usuario>/libft.git
cd libft


Compila la librería:

make


Esto generará el archivo:

libft.a


Para incluirla en un proyecto:

#include "libft.h"


Y compílala junto con tu código:

cc main.c -L. -lft

🧪 Tests y mains

Incluye tus propios archivos main.c para probar funciones específicas.
Puedes compilar así:

cc main.c libft.a
./a.out

🧵 Normas y estilo

Todo el código cumple:

La Norminette de 42

Restricciones de uso de funciones externas

Gestión correcta de memoria (sin leaks)

📚 Aprendizajes clave

✔ Comprensión profunda de la memoria en C
✔ Manipulación de punteros y arrays
✔ Implementación de estructuras de datos
✔ Diseño de librerías reutilizables
✔ Mejora en debugging y buenas prácticas

🧑‍💻 Autor

Manuel Cervera Lara
📍 42 Student
📧 (manuelcerveralara@gmail.com)
