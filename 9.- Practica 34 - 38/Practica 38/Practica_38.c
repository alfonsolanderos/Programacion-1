#include<stdio.h>

//Practica 38

int main(){
	int A[10]={2,4,3,6,4,8,3,9,8,5}, B[10]={8,4,2,6,3,8,3,7,2,6}, C[10], i;
	
	for(i=0;i<=9;i++){
		C[i] = A[i] * B[i];
	}
	
	
	for(i=0;i<=9;i++){
		printf("%i x %i = %i\n", A[i], B[i], C[i]);
	}
	
	system("PAUSE");
	return 0;
} 
