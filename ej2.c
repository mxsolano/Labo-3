#include <stdio.h>

int factorial (int n){
    int i = 1;
    while (n > 1) {
        i = i * n;
        int n = n - 1; //no es necesario definirla de nuevo, solo se asigna
    } 
//}                     esta llave esta mal 
    return i;
}                       //esta llave cierra la funcion factorial

//int main (int argc, char *argv||){ sintaxis de argv es *argv[]
int main (int argc, char *argv[]){
    int fac4 = factorial(4);
    int fac5 = factorial(5);
    printf("4! = %d, 5! = %d\n", fac4, fac5);

    return 0;
}