#include<stdio.h>//Practica 12

int main(){
    int n1, n2, n3;

    printf("Solicitar 3 numeros e imprimir el mayor \n");
    printf("Ingrese el primer numero -> ");
    scanf("%i", &n1);
    printf("Ingrese el segundo numero -> ");
    scanf("%i", &n2);
    printf("Ingrese el tercer numero -> ");
    scanf("%i", &n3);

    if(n1 > n2 && n1>n3){
        printf("El numero mayor es -> %i", n1);
    }
    else if (n2 > n1 &&n2>n3){
        printf("El numero mayor es -> %i", n2);
    }
    else if (n3 > n1 &&n3>n2){
        printf("El numero mayor es -> %i", n3);
    }



return 0;
}