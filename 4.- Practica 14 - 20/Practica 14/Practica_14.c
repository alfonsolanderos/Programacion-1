#include<stdio.h>

//Practica 14
//Calculadora suma y resta

int main(){
    int opc, a, b, res;
    printf("Elige la opcion deseada \n");
    printf("1.- Suma \n");
    printf("2.- Resta \n");
    scanf("%i", &opc);
    switch (opc){
        case 1: printf("Dame 2 valores -> ");
        scanf("%i%i", &a, &b);
        res = a + b;
        printf("El resultado es -> %i", res);
        break;
        case 2: printf("Dame 2 valores -> ");
        scanf("%i%i", &a, &b);
        res = a - b;
        printf("El resultado es -> %i", res);
        break;
        default: printf("Intentelo nuevamente\n");
    }
return 0;
}