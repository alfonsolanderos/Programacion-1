#include<stdio.h>//Practica 11

int main(){
    int num;

    printf("Determinar si el numero ingresado es par o impar \n");
    printf("Ingrese el numero a determinar -> ");
    scanf("%i", &num);

    if(num % 2 == 0){
        printf("El numero es par\n");
    }
    else{
        printf("El numero es impar\n");
    }

    printf("Hasta luego \n");

return 0;
}
