#include<stdio.h>

//Practica 40

int main(){
    int A1[3][3], B1[3][3], C1[3][3], i, j;

    //Llena arreglos
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++){
            printf("Dame el elemento %i %i del arreglo A1 -> ", i, j);
            scanf("%i", &A1[i][j]);
            printf("Dame el elemento %i %i del arreglo B1 -> ", i, j);
            scanf("%i", &B1[i][j]);
            }

    //Suma y muestra los arreglos
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++){
            C1[i][j]=A1[i][j]+B1[i][j];
            printf(" %i + %i = %i \n", A1[i][j], B1[i][j], C1[i][j]);
        }

    system("PAUSE");
    return 0;
}
