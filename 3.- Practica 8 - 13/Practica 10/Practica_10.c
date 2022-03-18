#include<stdio.h>//Practica 10

int main(){
    int num;

    printf("Determinar si el n�mero ingresado es positivo o negativo \n");
    printf("Ingresa el numero a determinar -> ");
    scanf("%i", &num);

    if(num > 0){
        printf("El numero ingresado es positivo \n");
    }
    else if (num < 0){
        printf("El numero ingresado es negativo \n");
    }

    printf("Hasta pronto! \n");

return 0;
}
