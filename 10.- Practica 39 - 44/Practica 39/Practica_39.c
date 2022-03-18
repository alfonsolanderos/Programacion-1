#include<stdio.h>

//Practica 39

int main(){
	int matriz[4][4], i, j;

	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("Dame el elemento %i %i del arreglo bidimensional -> ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}

	//Muestra arreglo
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("El elemento %i, %i es %i\n", i, j, matriz[i][j]);
		}
	}

	system("PAUSE");
	return 0;
}
