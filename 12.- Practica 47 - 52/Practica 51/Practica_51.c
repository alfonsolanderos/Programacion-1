#include<stdio.h>

//Practica 51 - Factorial de un numero

int fact(){
    int n1, fact = 1, i = 1;

    printf("Ingrese el numero a calcular el factorial -> ");
    scanf("%i", &n1);

    do{
        fact = fact * i;
        i++;
    }while(i <= n1);

    return fact;
}

int main(){

    printf("\nTu resultado del calculo de factorial es -> %i", fact());

    return 0;
}
