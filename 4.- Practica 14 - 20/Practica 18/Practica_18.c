#include<stdio.h>

//Menu de conversiones de distancias

int main(){
	int op;
	float mts, cm, km;
	
	printf("Conversiones de distancias \n");
	printf("1.- Convertir metros a centimetros \n");
	printf("2.- Convertir kilometros a metros\n");
	printf("3.- Convertir centimetros a metros\n");
	printf("4.- Convertir metros a kilometros \n");
	printf("Seleccione la opcion deseada -> ");
	scanf("%i", &op);
	
	switch(op){
		case 1: printf("A seleccionado convertir metros a centimetros\n");
		printf("Ingrese la cantidad a convertir en metros -> ");
		scanf("%f", &mts);
		cm = mts / 100;
		printf("La conversion en centimetros es -> %.2f", cm);
			break;
			
		case 2:printf("A seleccionado convertir kilometros a metros \n");
		printf("Ingrese la cantidad a convertir en kilometros -> ");
		scanf("%f", &km);
		mts = km / 1000;
		printf("La conversion en metros es -> %.2f", mts);
			break;
			
		case 3: printf("A seleccionado convertir centimetros a metros\n");
		printf("Ingrese la cantidad a convertir en centimetros -> ");
		scanf("%f", &cm);
		mts = cm * 0.01;
		printf("La conversion en metros es de %.2f", mts);
			break;
		
		case 4: printf("A seleccionado convertir metros a kilometros \n");
		printf("Ingrese la cantidad a convertir en metros -> ");
		scanf("%f", &mts);
		km = mts * 0.001;
		printf("La conversion a kilometros es de %.2f", km);
			break;
			
		default: printf("Seleccione una opci�n correcta");
	}
	
	
	return 0;
}