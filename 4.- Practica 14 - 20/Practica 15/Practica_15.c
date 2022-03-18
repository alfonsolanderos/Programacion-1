#include<stdio.h>

//Calculadora simple con el uso de Switch
///Practica 15

int main(){
    int op;
    float n1, n2, suma, resta, mult, div;

    printf("Bienvenido a la calculadora\n");
    printf("1.- Sumar\n");
    printf("2.- Restar\n");
    printf("3.- Multiplicar\n");
    printf("4.- Dividir\n");
    printf("Seleccione la opcion deseada -> ");
    scanf("%i", &op);

    switch(op){
        case 1: printf("Usted a seleccionado la opcion sumar\n");
        printf("Ingrese el primer numero -> ");
        scanf("%f", &n1);
        printf("Ingrese el segundo numero -> ");
        scanf("%f", &n2);
        suma = n1 + n2;
        printf("El resultado de su suma es -> %.f", suma);

            break;

        case 2: printf("Usted a seleccionado restar\n");
        printf("Ingrese el primer numero -> ");
        scanf("%f", &n1);
        printf("Ingrese el segundo numero -> ");
        scanf("%f", &n2);
        resta = n1 - n2;
        printf("El resultado de tu resta es ->  %.f", resta);

            break;
        case 3: printf("Usted a seleccionado multiplicar\n");
        printf("Ingrese el primer numero -> ");
        scanf("%f", &n1);
        printf("Ingrese el segundo numero -> ");
        scanf("%f", &n2);
        mult = n1 * n2;
        printf("El resultado de la multiplicacion es ->  %.f", mult);

            break;

        case 4: printf("Usted a seleccionado division \n");
        printf("Ingrese el primer numero -> ");
        scanf("%f", &n1);
        printf("Ingrese el segundo numero -> ");
        scanf("%f", &n2);
        div = n1 / n2;
        printf("El resultado de su division es ->  %.2f", div);

            break;

        default: printf("Opcion desconocida");
    }


    return 0;

}