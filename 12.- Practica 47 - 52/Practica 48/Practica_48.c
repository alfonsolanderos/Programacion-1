#include<stdio.h>
#include<stdlib.h>

//Practica 48

int n1, n2;

int suma(){
    int c;
    printf("Dame 2 valores -> ");
    scanf("%d%d", &n1, &n2);
    c=n1+n2;
    return(c);
}

int resta(){
    printf("Dame 2 valores -> ");
    scanf("%d%d", &n1, &n2);

    return(n1-n2);
}

int main(){
    int r, op;
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("Seleccione la opcion deseada -> ");
    scanf("%i", &op);

    if(op==1){
        r = suma();
        printf("El resultado de tu suma es -> %i\n", r);
    }
    else if(op==2){
        printf("El resultado de tu resta es -> %i\n", resta());
    }

    system("PAUSE");
    return 0;
}
