#include<stdio.h>

//Practica 43

int main(){
    int A1[4][4], i, j, suma=0;

    printf("Diagonal de una matriz 4x4 \n\n");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Dame los valores de la matriz en posicion %i, %i -> ", i, j);
            scanf("%i", &A1[i][j]);
            if(i==j){
                suma = suma + A1[i][j];
            }
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%i", A1[i][j]);
            printf("   ");
        }
        printf("\n\n\n");
    }
    printf("Suma diagonal de matriz -> %i\n", suma);
    
    system("PAUSE");
    return 0;
}
