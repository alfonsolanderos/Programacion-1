#include<stdio.h>

//Suma y resta con selectiva doble anidada

int main(){
	int op;
	float n1, n2, res;
	
	printf("Suma y resta\n");
	printf("1.- Suma\n");
	printf("2.- Resta\n");
	printf("Seleccione la opción deseada -> ");
	scanf("%i", &op);
	
	if(op == 1){
		printf("A seleccionado sumar\n");
		printf("Ingrese el primer numero -> "); scanf("%f", &n1);
		printf("Ingrese el segundo numero -> "); scanf("%f", &n2);
		res = n1 + n2;
		printf("El resultado de tu suma es -> %.f", res);
		
	}
	else if(op==2){
		printf("A seleccionado restar\n");
		printf("Ingrese el primer numero -> "); scanf("%f", &n1);
		printf("Ingrese el segundo numero -> "); scanf("%f", &n2);
		res = n1 - n2;
		printf("El resultado de tu resta es -> %.f", res);
	}
	else{
		printf("Seleccione una opcion correcta");
	}
	
	return 0;
}
