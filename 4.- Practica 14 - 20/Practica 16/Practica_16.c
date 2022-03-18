#include<stdio.h>
#define PI 3.1416

//Practicas 16

int main(){
	int op;
	float area, lado, base, altura, radio, diametro, basemenor, basemayor;
	printf("Calcular el area de la figura seleccionada\n");
	printf("1.- Cuadrado\n");
	printf("2.- Rectangulo\n");
	printf("3.- Circulo\n");
	printf("4.- Trapecio\n");
	printf("Seleccione la opcion deseada -> ");
	scanf("%i", &op);
	
	switch(op){
		case 1: printf("Calcular el area de un cuadrado \n");
    printf("Ingresa la medida de un lado del cuadrado -> ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El area resultante es de: %.f", area);
		break;
		
		case 2: printf("Calcular el area de un rect�ngulo \n");
    printf("Ingrese la medida de la base - > ");
    scanf("%f", &base);
    printf("Ingrese la medida de la altura -> ");
    scanf("%f", &altura);
    area = base * altura;
    printf("El resultado del area total es de: %.f", area);
    	break;
		
		case 3: printf("Calcular el area de un circulo \n");
    printf("Ingrese la medida del radio -> ");
    scanf("%f", &radio);
    diametro = radio * radio;
    area = PI * diametro;
    printf("El �rea del circulo es de %.2f", area);
    	break;
    	
    	case 4: printf("Calcular area de un trapecio \n");
    printf("Ingresa la medida de la base mayor -> "); scanf("%f", &basemayor);
    printf("Ingresa la medida de la base menor -> "); scanf("%f", &basemenor);
    printf("Ingresa la medida de la altura -> "); scanf("%f", &altura);
    area = (basemayor + basemenor) / 2 * altura;
    printf("El area resultante es de : %.2f", area);
    	break;
    		
		default: printf("Seleccione una opcion correcta");
	}
	
	return 0;
}