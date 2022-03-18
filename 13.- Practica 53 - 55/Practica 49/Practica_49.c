#include<stdio.h>

//Practica 53
//paso de parametros por valor

int suma(int a, int b){
    int c;
    c = a + b;

    return (c);
}

int resta(int a, int b){

    return(a-b);
}

int main(){
    int n1, n2, r, op;
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("Seleccione la opcion deseada -> ");
    scanf("%i", &op);
    printf("Dame el primer valor -> ");
    scanf("%i", &n1);
    printf("Dame el segundo valor -> ");
    scanf("%i", &n2);

    if(op==1){
        r = suma(n1, n2);
        printf("El resultado de tu suma es -> %i\n", r);
    }
    else if(op==2){
        printf("El resultado de tu resta es -> %i\n", resta(n1, n2));
    }

    system("PAUSE");
    return 0;
}