#include<stdio.h>
#include<stdlib.h>

//Practica 32

int main(){
	int i=1, j=1;
	
	while(i<=10){
		j = 1;
		printf("Tabla del %i \n", i);
		while(j<=10){
			printf("%i x %i = %i\n", i, j, i * j);
			j++;
		}
		i++;
	}
		

	return 0;
}
