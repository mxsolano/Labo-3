#include <stdio.h>

int factorial (int n){
    int i = 1;
    while (n > 1) {
        i = i * n;
        int n = n - 1; //no es necesario definirla de nuevo, solo se asigna
    }  
    return i;
}                       

int main() {
    int n;
    printf("Ingrese un numero para calcular su factorial: "); 
    scanf("%d", &n); //guarda los datos ingresados por el usuario

    int resultado = factorial(n); //se guarda el resultado de la funcion en la variable
    printf("%d! = %d\n", n, resultado);
    return 0;
}