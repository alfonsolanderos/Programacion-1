#include<stdio.h>//Practica 13

int main(){

    int n1, n2, n3;

    printf("Solicitar 3 numeros y ordenarlos de manera ascendente \n");
    printf("Ingrese el primer numero -> "); scanf("%i", &n1);
    printf("Ingrese el segundo numero -> "); scanf("%i", &n2);
    printf("Ingrese el tercer numero -> "); scanf("%i", &n3);

    if (n1 < n2 && n2 < n3 && n1 < n3){
        printf("El orden es el siguiente c1 -> %i %i %i", n1, n2, n3);
    }
    else if (n1 < n3 && n3 < n2 && n1 < n2){
        printf("El orden es el siguiente c2 -> %i %i %i", n1, n3, n2);
    }
    else if (n2 < n1 && n1 < n3 && n2 < n3){
        printf("El orden es el siguiente c3 -> %i %i %i", n2, n1, n3);
    }
    else if (n2 < n3 && n3 < n1 && n2 < n1){
        printf("El orden es el siguiente c4 -> %i %i %i", n2, n3, n1);
    }
    else if (n3 < n1 && n1 < n2 && n3 < n2){
        printf("El orden es el siguiente c5 -> %i %i %i", n3, n1, n2);
    }
    else if (n3 < n2 && n2 < n1 && n3 < n1){
        printf("El orden es el siguiente c6 -> %i %i %i", n3, n2, n1);
    }
    else
        printf("Ingrese un valor valido");

return 0;
}