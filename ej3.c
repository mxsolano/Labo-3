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