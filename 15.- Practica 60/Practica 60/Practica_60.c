#include<stdio.h>
#define TAM 100

int ordenar(int n, int x[]);

int main(){
	int i, n, x[TAM];
	
	printf("¿Cuantos numeros seran introducidos?");
	scanf("%i", &n);
	
	for(i=0;i<n;++i){
		printf("i=%i x=", i+1);
		scanf("%i", &x[i]);
	}
	
	ordenar(n,x);
	
	printf("\nLista de numeros ordenada\n");
	
	for(i=0;i<n;++i)
		printf("i=%i x=%i\n", i+1, x[i]);
	return 0;
}

int ordenar(int n, int x[]){
	int i, elem, temp;
	
	for(elem=0;elem<n-1;++elem)
		for(i=elem+1;i<n;++i)
			if(x[i]<x[elem]){
				temp = x[elem];
				x[elem] = x[i];
				x[i]= temp;
			}
			
	return 0;
}
