#include <stdio.h>
#include <stdlib.h> // rand() y srand()
#include <time.h>   // genera srand()

#define MIN_SIZE 1
#define MAX_SIZE 10
#define DEFAULT_SIZE 5 // tamano 

int min(int a, int b, int c) { //encuentra el  valor minimo ie:ceros adyacentes a 1s 
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int encuentraCuadradoMasGrande(int matrix[][MAX_SIZE], int n) { 
    int dp[MAX_SIZE][MAX_SIZE]; 
    int CuadradoMaximo = 0;

    // copia las columnas y filas inicializadas para desp popularlas
    for (int i = 0; i < n; i++) {
        dp[0][i] = matrix[0][i];
        dp[i][0] = matrix[i][0];
        if (matrix[i][0] == 1)
            CuadradoMaximo = 1;
    }

    // para llenar la matriz
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 1) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1;
                if (dp[i][j] > CuadradoMaximo)
                    CuadradoMaximo = dp[i][j];
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return CuadradoMaximo;
}

int main() {

        // matriz con numeros aleatorios binarios
    printf("Matriz generada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 2; // 1s o 0s 
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}