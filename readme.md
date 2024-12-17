# Learning C the Hard Way

Este repositorio contiene mi progreso y soluciones a los ejercicios propuestos en el libro **"Learn C the Hard Way: Practical Exercises on the Computational Subjects You Keep Avoiding (Like C)"** de Zed A. Shaw. El libro es una introducción práctica al lenguaje de programación C, enfocándose en conceptos fundamentales y prácticas para escribir código limpio y eficiente.

## Contenido

El repositorio está estructurado de la siguiente manera:

- **Archivos fuente**: Los archivos `.c` contienen los ejercicios y soluciones en formato de código fuente.
:q:wq- **Makefile**: Archivo para automatizar el proceso de compilación.

## Estructura del repositorio

```
.
├── ex1.c       # Ejercicio 1
├── ex3.c       # Ejercicio 3
├── ex7.c       # Ejercicio 7
├── ex8.c       # Ejercicio 8
├── Makefile    # Archivo para compilar los ejercicios
├── .gitignore  # Configuración para ignorar archivos no rastreados
```

## Requisitos

Para ejecutar o compilar los ejercicios necesitas:

- Un compilador de C (por ejemplo, `gcc`).
- Un sistema operativo basado en UNIX/Linux (aunque también debería funcionar en otros entornos).

## Uso

1. Clona el repositorio:
   ```bash
   git clone <URL-del-repositorio>
   cd learning_c_the_hard_way
   ```

2. Compila un ejercicio utilizando `gcc`:
   ```bash
   gcc ex1.c -o ex1
   ./ex1
   ```

   O utiliza el `Makefile`:
   ```bash
   make ex1
   ./ex1
   ```

3. Para limpiar los ejecutables generados:
   ```bash
   make clean
   ```

## Progreso

### Ejercicios completados

- [x] Ejercicio 1 Dust of Taht Compiler
- [x] Ejercicio 3 Formatted Printing
- [x] Ejercicio 7 Variables and types
- [x] Ejercicio 8 If, Else-if,Else
- [x] Ejercicio 9 While-Loop and Boolean Expressions
- [x] Ejercicio 10 Switch Statements

### Ejercicios pendientes

El repositorio se actualizará a medida que complete más ejercicios del libro.

## Recursos adicionales

- [Learn C the Hard Way](https://learncodethehardway.org/c/): Sitio web oficial del libro.
- [Documentación de C](https://en.cppreference.com/w/c): Referencia completa sobre el lenguaje C.

## Licencia

Este repositorio es solo para fines educativos. Licencia MIT. Los derechos del libro **"Learn C the Hard Way"** pertenecen a su autor, Zed A. Shaw.

## Contacto

Si tienes sugerencias o encuentras errores en los ejercicios, no dudes en contactarme o abrir un issue.

