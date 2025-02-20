# README

## Descripción
Este programa en C++ encuentra el elemento más pequeño en una matriz bidimensional de enteros. Es una demostración de cómo trabajar con arreglos multidimensionales y cómo implementar algoritmos de búsqueda en estructuras de datos.

## Funcionalidad
El programa define una función llamada `encontrarMinimo` que recibe los siguientes parámetros:
- Una matriz bidimensional de enteros.
- La cantidad de filas.
- La cantidad de columnas.

La función recorre todos los elementos de la matriz utilizando bucles anidados y encuentra el valor más pequeño. Si el tamaño de la matriz es inválido (filas o columnas <= 0), la función devuelve -1 como error.

En el programa principal, se inicializa una matriz de 3x3 con valores predefinidos y se llama a la función `encontrarMinimo` para calcular el menor valor. El resultado se muestra en la consola.

## Cómo ejecutar el programa
1. Asegúrte de tener un compilador de C++ instalado, como GCC o cualquier IDE que soporte C++.
2. Copia el código fuente a un archivo con extensión `.cpp`. Por ejemplo, `encontrar_minimo.cpp`.
3. Compila el archivo utilizando el compilador. Por ejemplo:
   ```
   g++ encontrar_minimo.cpp -o encontrar_minimo
   ```
4. Ejecuta el programa compilado:
   ```
   ./encontrar_minimo
   ```

## Resultado esperado
El programa calcula el elemento más pequeño de la matriz `numeros` con valores:
```
5 2 8
3 9 1
7 4 6
```

El resultado esperado es:
```
El elemento más pequeño en la matriz es: 1
```

## Propósito
El propósito principal de este programa es:
- Enseñar el uso de matrices bidimensionales en C++.
- Practicar el recorrido de estructuras de datos utilizando bucles anidados.
- Desarrollar habilidades para implementar algoritmos de búsqueda en estructuras de datos.

## Observaciones
- Actualmente, la matriz tiene valores predefinidos. Se podría mejorar el programa solicitando al usuario que ingrese los valores de la matriz.
- El programa asume que la matriz siempre tiene un tamaño de 3x3. Para hacerlo más flexible, se podría modificar para que acepte matrices de cualquier tamaño mediante argumentos dinámicos.
- En caso de matrices vacías (filas o columnas <= 0), la función devuelve -1, lo que puede ser manejado para mostrar un mensaje de error al usuario.
