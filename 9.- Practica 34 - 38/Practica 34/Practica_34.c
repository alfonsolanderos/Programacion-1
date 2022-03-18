#include<stdio.h>
#include<stdlib.h>

//Practica 34

int main(){
	int datos[10], i;
	
	for(i=0;i<=9;i++){
		printf("\nDame el elemento %i -> ", i+1);
		scanf("%i", &datos[i]);
	}
	
	for(i=9;i>=0;i--){
		printf("El elemento %i es %i\n", i,datos[i]);
	}
	
	
	return 0;
}
