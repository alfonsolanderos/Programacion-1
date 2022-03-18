#include<stdio.h>

//Practica 37

int main(){
	int A[15]={1,54,32,95,48,10,12,42,92,84,52,82,13,84,58}, mayor, i;
	
	for(i=0;i<=14;i++){
		printf("El %i elemento es %i\n", i+1, A[i]);
		
	}
	
	mayor = A[i];
	for(i=0;i<=14;i++){
		if(A[i] > mayor){
			mayor = A[i];
		}
	}
	
	printf("\nEl numero mayor es -> %i\n", mayor);
	
	system("PAUSE");
	return 0;
}
