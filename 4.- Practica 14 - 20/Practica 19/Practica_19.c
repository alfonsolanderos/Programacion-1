#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int op, base, poten;
	float num, res;
	
	printf("Calculadora cientifica simple \n");
	printf("1.- Potencia\n");
	printf("2.- Raiz cuadrada\n");
	printf("3.- Seno\n");
	printf("4.- Coseno\n");
	printf("5.- Logaritmo natural\n");
	printf("Seleccione la opcion deseada -> ");
	scanf("%i", &op);
	
	switch(op){
		case 1: printf("A seleccionado la potencia\n");
		printf("Ingrese el numero al elevar -> ");
		scanf("%i", &base);
		printf("Ingrese la potencia -> ");
		scanf("%i", &poten);
		res = pow(base, poten);
		printf("El numero resultante es -> %.f", res);
			break;
			
		case 2: printf("A seleccionado raiz cuadrada \n");
		printf("Ingrese el numero a calcular la raiz cuadrada -> ");
		scanf("%f", &num);
		res = sqrt(num);
		printf("El numero resultante es -> %.f", res);
			break;
			
		case 3: printf("A seleccionado seno\n");
		printf("Ingrese el numero al calcular el seno -> ");
		scanf("%f", &num);
		res = sin(num);
		printf("El numero resultante es -> %.3f", res);
			break;
		
		case 4: printf("A seleccionado coseno\n");
		printf("Ingrese el numero a calcular el coseno -> ");
		scanf("%f", &num);
		res = cos(num);
		printf("El numero resultante es -> %.3f", res);
			break;
		
		case 5: printf("A seleccionado logaritmo natural\n");
		printf("Ingrese el numero a calcular el lagoritmo natural -> ");
		scanf("%f", &num);
		res = log(num);
		printf("El numero resultante es -> %.3f", res);
			break;
		
		default: printf("Seleccione una opcion correcta");
	}
	
	
	return 0;
}