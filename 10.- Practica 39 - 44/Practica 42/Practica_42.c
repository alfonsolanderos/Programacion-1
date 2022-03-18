#include<stdio.h>

//Practica 42

int main(){
    int i, j, aux=0, A1[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Dame el elemento de la posicion [%i][%i] de la matriz A1 -> ", i, j);
            scanf("%i", &A1[i][j]);
        }
    }
    for(i=0;i<3;i++){
    	int sumcol = 0;
    	aux += 1;
        for(j=0;j<3;j++){
            sumcol = sumcol + A1[i][j];
        }
        printf("\nSuma de la columna %i es -> %i", aux, sumcol);
    }

    system("Pause");
    return 0;
}
