#include <stdio.h>
#include "sumar.h"
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Ingrese 1er número: ");
    scanf("%d", &a);
    printf("Ingrese 2do número: ");
    scanf("%d", &b);
    printf("la suma es: %d",sumar(a,b));
    return 0;
}