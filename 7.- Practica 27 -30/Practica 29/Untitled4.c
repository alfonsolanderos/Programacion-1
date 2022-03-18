#include<stdio.h>

int main(){
	int i,j;
	
	printf("Ingrese el numero de la tabla a presentar -> ");
	scanf("%i", &i);
	
	for(j=1;j<=10;j++){
		printf("%i x %i = %i\n", i, j, i * j);
	}
	
	system("PAUSE");
	return 0;
}
