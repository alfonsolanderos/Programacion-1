#include<stdio.h>
#include<stdlib.h>

//Practica 56 - Prototipos

int suma(int a, int b);
int resta(int a, int b);

int main(){
    int n1, n2, r, op;

    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("Escoge la opcion deseada -> ");
    scanf("%i", &op);
    printf("Dame el primer valor -> ");
    scanf("%i", &n1);
    printf("Dame el segundo valor -> ");
    scanf("%i", &n2);

    if(op==1){
        r=suma(n1,n2);
        printf("El resultado de tu suma es  %i \n", r);
    }
    else if(op==2){
    	r = resta(n1,n2);
        printf("El resultado de tu resta es %i \n", r);
        
    }
    system("PAUSE");
    return 0;
}

int suma(int a, int b){
    int c;
    c = a + b;
    return(c);
}

int resta(int a, int b){
    return(a-b);
}