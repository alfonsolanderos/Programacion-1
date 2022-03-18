#include<stdio.h>

//Calcular promedio de n calificaciones

int main(){
	int n, i;
	float prom, calf, x = 0;
	
	printf("Ingrese el total de materias -> ");
	scanf("%i", &n);
	
	for(i=1;i<=n;i++){
		printf("Ingrese el numero -> ");
		scanf("%f", &calf);
		x = x + calf;
	}
	
	prom= x / n;
	printf("Tu promedio es -> %.2f", prom);
	
	
	return 0;
}