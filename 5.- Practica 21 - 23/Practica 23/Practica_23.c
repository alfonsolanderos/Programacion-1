#include<stdio.h>//Practica 23

//Calculo de potencia 

int main(){
	int base, poten, res=1, cont=0;
	
	printf("Ingrese la base -> "); scanf("%i", &base);
	printf("Ingrese la potencia -> "); scanf("%i", &poten);
	
	while(cont<poten){
		res = res * base;
		cont++;
	}
	printf("%i", res);

}