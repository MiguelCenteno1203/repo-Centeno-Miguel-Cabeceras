#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Ingrese 1er número: ");
    scanf("%d", &a);
    printf("Ingrese 2do número: ");
    scanf("%d", &b);
    printf("la suma es: %d",sumar(a,b));
    printf("la resta es: %d",restar(a,b));
    printf("la multiplicación es: %d",multiplicar(a,b));
    printf("la división es: %d",dividir(a,b));
    return 0;
}