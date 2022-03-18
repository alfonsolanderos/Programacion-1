#include<stdio.h>

int main(){
	int op;
	float mx, dll, eur;
	printf("Menu conversiones de divisas\n");
	printf("1.- Pesos a dolares\n");
	printf("2.- Pesos a euros\n");
	printf("3.- Dolar a pesos\n");
	printf("4.- Euros a pesos\n");
	printf("Seleccione la opción deseada -> ");
	scanf("%i", &op);
	
	switch(op){
		case 1: printf("A seleccionado convertir pesos a dolares\n");
		printf("Ingrese la cantidad a convertir en pesos mx -> ");
		scanf("%f", &mx);
		dll = mx * 0.048;
		printf("Su cantidad convertida a dolares es -> %.2f \n", dll);
			break;
		
		case 2: printf("A seleccionado convertir pesos a euros\n");
		printf("Ingrese la cantidad a convertir en pesos mx -> ");
		scanf("%f", &mx);
		eur = mx * 0.041;
		printf("Su cantidad convertida a euros es -> %.2f \n", eur);
			break;
		
		case 3: printf("A seleccionado convertir dolares a pesos\n");
		printf("Ingrese la cantidad a convertir en dolares US -> ");
		scanf("%f", &dll);
		mx = dll * 20.72;
		printf("Su cantidad convertida en pesos es -> %.2f \n", mx);
			break;
		
		case 4: printf("A seleccionado convertir euros a pesos \n");
		printf("Ingrese la cantidad a convertir en euros -> ");
		scanf("%f", &eur);
		mx = eur * 24.34;
		printf("Su cantidad convertida en pesos es -> %.2f \n", mx);
			break;
			
		default: printf("Seleccione una opcion correcta");
		
	}
	
	return 0;
}
