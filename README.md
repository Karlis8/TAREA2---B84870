# TAREA2---B84870
## Descripción del programa

Este programa compara el rendimiento de dos algoritmos de ordenamiento clásicos: **Bubble Sort** y **Selection Sort**. 

Se genera un arreglo de números enteros aleatorios, se ordena con ambos algoritmos, y se mide el tiempo que cada uno tarda en completarse. Finalmente, se muestra el arreglo ordenado (si el tamaño lo permite) y una comparación del rendimiento entre ambos algoritmos.

---

## Cómo compilar y ejecutar desde la terminal

Usá `gcc` para compilar el archivo C. Por ejemplo:

```bash
compilar: <gcc -Wall T2_B84870.c -o ordenamiento>
ejecjutar: <./ordenamiento/>
```

---

## Comparación de rendimiento: Bubble Sort vs Selection Sort

| Tamaño del arreglo | Tiempo Bubble Sort (s)  | Tiempo Selection Sort (s)   | Algoritmo más rápido               |
|--------------------|-------------------------|-----------------------------|------------------------------------|
| 10                 | 0.000002                | 0.000001                    | Selection Sort                     |
| 100                | 0.000011                | 0.000009                    | Selection Sort                     |
| 1,000              | 0.000468                | 0.000398                    | Selection Sort                     |
| 10,000             | 0.045495                | 0.039060                    | Selection Sort                     |

###  Observaciones

- En todos los casos medidos, **Selection Sort fue más rápido** que Bubble Sort.
- Aunque ambos algoritmos tienen una complejidad temporal de **O(n²)**, sus diferencias internas hacen que Selection Sort tenga mejor rendimiento en esta implementación.
- Los tiempos pueden variar ligeramente en cada ejecución dependiendo de la carga del sistema, pero las tendencias generales se mantienen.
