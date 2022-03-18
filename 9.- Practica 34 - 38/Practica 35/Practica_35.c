#include<stdio.h>

//Practica 35

int main(){
	float A[5]={3.2,4.6,1.7,8.3,5.2}, B[5]={4.9,7.1,9.5,2.7,6.8}, C[5];
	int i;
	
	//Suma arreglos que ya fueron inicializados
	for(i=0;i<=4;i++){
		C[i]= A[i] + B[i];
	}
	
	//Muestra completamente cada una de las sumas
	
	for(i=0;i<=4;i++){
		printf("%.2f + %.2f = %.2f\n", A[i], B[i], C[i]);
	}
	
	system("Pause");
	return 0;
}
