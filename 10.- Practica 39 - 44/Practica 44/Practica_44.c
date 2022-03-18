#include<stdio.h>

//practica 44

int main(){
    int A1[3][3], A2[3][3], A3[3][3], i, j, mult;

    printf("Multiplicacion de 2 matrices\n\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Dame el valor de la primer matriz en la posicion %i,%i -> ", i, j);
            scanf("%i", &A1[i][j]);
        }
    }
    system("cls");
    
    printf("Multiplicacion de 2 matrices\n\n");
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("Dame el valor de la segunda matriz en la posicion %i,%i -> ", i, j);
            scanf("%i", &A2[i][j]);
		}
	}
	system("cls");
	
	printf("Multiplicacion de 2 matrices\n\n");
	
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            A3[i][j] = A1[i][j] * A2[i][j];
            printf("%i * %i = %i\n", A1[i][j], A2[i][j], A3[i][j]);
        }
    }

    return 0;
}
