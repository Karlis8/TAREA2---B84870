#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10000  // Tamano maximo permitido

void llenarArreglo(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }
}

void copiarArreglo(int *origen, int *destino, int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origen[i];
    }
}

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void imprimirArreglo(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int original[MAX];
    int copia[MAX];

    printf("Ingrese el tamano del arreglo (maximo %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Tamano invaido. Debe estar entre 1 y %d.\n", MAX);
        return 1;
    }

    srand(time(NULL));
    llenarArreglo(original, n);

    //if (n <= 100) {
       // printf("\nArreglo original:\n");
        //imprimirArreglo(original, n);
   // }

    // Bubble Sort
    copiarArreglo(original, copia, n);
    clock_t inicioBubble = clock();
    bubbleSort(copia, n);
    clock_t finBubble = clock();
    double tiempoBubble = (double)(finBubble - inicioBubble) / CLOCKS_PER_SEC;

   // if (n <= 100) {
     //   printf("\nArreglo ordenado con Bubble Sort:\n");
       // imprimirArreglo(copia, n);
    //}

    // Selection Sort
    copiarArreglo(original, copia, n);
    clock_t inicioSelection = clock();
    selectionSort(copia, n);
    clock_t finSelection = clock();
    double tiempoSelection = (double)(finSelection - inicioSelection) / CLOCKS_PER_SEC;

    //if (n <= 100) {
      //  printf("\nArreglo ordenado con Selection Sort:\n");
        //imprimirArreglo(copia, n);
    //}

    // Comparacion de tiempos
    printf("\nTiempos de ejecucion:\n");
    printf("Bubble Sort:    %.6f segundos\n", tiempoBubble);
    printf("Selection Sort: %.6f segundos\n", tiempoSelection);

    if (tiempoBubble < tiempoSelection)
        printf("==> Bubble Sort fue mas rapido.\n");
    else if (tiempoSelection < tiempoBubble)
        printf("==> Selection Sort fue mas rapido.\n");
    else
        printf("==> Ambos algoritmos tomaron aproximadamente el mismo tiempo.\n");

    return 0;
}
