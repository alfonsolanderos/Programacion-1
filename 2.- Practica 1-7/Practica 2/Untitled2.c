#include<stdio.h>

//Suma de dos enteros

int main(){
    int n1, n2, suma;
    printf("Suma de 2 enteros\n");
    printf("Dame un numero -> ");
    scanf("%i", &n1);
    printf("Dame otro n�mero -> ");
    scanf("%i", &n2);
    suma = n1 + n2;
    printf("El resultado de tu suma es -> %i", suma);


return 0;
}