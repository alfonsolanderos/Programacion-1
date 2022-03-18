#include<stdio.h>
#include<stdlib.h>

//Practica 33

int main(){
	int i=1, j=1;
	
	do{
		j = 1;
		printf("Tabla del %i \n", i);
		do{
			printf("%i x %i = %i\n", i, j, i * j);
			j++;
		}while(j<=10);
		i++;
	}while(i<=10);
	
	return 0;
}
