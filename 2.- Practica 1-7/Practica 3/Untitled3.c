#include<stdio.h>

//Promedio 3 calificaciones

int main(){
    float c1,c2,c3, promedio;
    printf("Promedio de 3 calificaciones \n");
    printf("Ingresa la primer calificacion -> ");
    scanf("%f", &c1);
    printf("Ingresa la segunda calificacion -> ");
    scanf("%f", &c2);
    printf("Ingresa la tercer calificacion -> ");
    scanf("%f", &c3);
    promedio = (c1+c2+c3)/3;
    printf("Tu promedio es de: %.2f", promedio);

return 0;
}