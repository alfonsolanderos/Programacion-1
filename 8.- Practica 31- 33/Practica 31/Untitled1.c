#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j;
	
	for(i=1;i<=10;i++){
		printf("Tabla de multiplicar del %i \n", i);
		
		for(j=1;j<=10;j++)
		printf("%i x %i = %i \n", i, j, i * j);
	}
	
	system("PAUSE");
	return 0;
}
