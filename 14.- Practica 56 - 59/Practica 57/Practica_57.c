#include<stdio.h>

//Practica 57

int prom(float res);

int prom(float res){
	float n1, cont = 0;
	int i;
    for(i=0;i<=4;i++){
        printf("Ingrese la %i calificacion -> ", i +1);
        scanf("%f", &n1);
        cont += n1;
    }

    res = cont/i;

    printf("El promedio es -> %.2f\n", res);
    system("PAUSE");
}

int main(){
    int r;
    float res;
    printf("Promedio de 5 calificaciones\n\n");
    r = prom(res);
}