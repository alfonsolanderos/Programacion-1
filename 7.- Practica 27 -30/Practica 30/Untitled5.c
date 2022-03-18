#include<stdio.h>
#include<stdlib.h>

//Practica 30

int main(){
	int pares =0, impares =1, num, i, cont;
	
	printf("Ingrese la cantidad de numeros a determinar -> ");
	scanf("%i", &cont);
	
	for(i=1;i<=cont;i++){
		if(num%2==0){
			pares += num;	
		}
		else
			impares *= num;
			
		printf("Ingrese el numero a determinar -> ");
		scanf("%i", &num);
		
	}
	
	printf("\nLa suma de los pares es -> %i",pares);
	printf("\nEl producto de los impares es -> %i", impares);
	
	return 0;
}
