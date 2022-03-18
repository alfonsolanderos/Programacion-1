#include<stdio.h>

//Practica 58 - Factorial de un numero

int fact(int n1);

int fact(int n1){
    int fact = 1, i = 1;

    printf("Ingrese el numero a calcular el factorial -> ");
    scanf("%d", &n1);

    do{
        fact = fact * i;
        i++;
    }while(i <= n1);

    return fact;
}

int main(){
    int num1;

    printf("\nTu resultado del calculo de factorial es -> %d", fact(num1));

    return 0;
}