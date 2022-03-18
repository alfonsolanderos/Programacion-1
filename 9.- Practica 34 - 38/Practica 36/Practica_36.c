#include<stdio.h>

//Practica 36


int main(){
	int A[10]={10, 53, 64, 72, 53, 31, 75, 80, 94, 81}, i;
	float prom = 0, suma = 0;
	
	for(i=0;i<=9;i++){
		printf("Su numero ingresado %i es %i \n", i+1, A[i]);
	}
	
	for(i=0;i<=9;i++)
		suma += A[i];
		prom = suma/10;
		printf("\nSu promedio es -> %.2f\n", prom);
	
	system("PAUSE");
	return 0;
}
