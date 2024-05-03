#include <stdio.h>

void numeros_triangulares() { //no retorno nada, por lo que se selecciona tipo void
    int n;
    for (n = 1; n <= 100; n++) { //intervalo de 1 a 100, cada iteracion suma 1 a n 
        int numero_triangular = (n * (n + 1)) / 2; //ec para obtener numeros trangulares
        printf("%d ", numero_triangular);
    }
    printf("\n");
}

int main() {
    printf("Los primeros 100 numeros triangulares son:\n");
    numeros_triangulares(); //se llama a la funcion
    return 0;
}