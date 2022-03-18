#include<stdio.h>

//Calcular factorial de un numero n

int main(){
	int n1, fact = 1, i = 1;
	
	printf("Ingrese el numero a calcular el factorial -> ");
	scanf("%i", &n1);
	
	do{
		fact = fact * i;
		i++;
		
			
	}while(i <= n1);
	
	printf("%i\n", fact);
	
	system("PAUSE");
	
	return 0;
}
