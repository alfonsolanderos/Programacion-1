#include<stdio.h>
#define PI 3.1416

//Calcular el area de un circulo

int main(){
    float radio, area, diametro;
    printf("Calcular el area de un circulo \n");
    printf("Ingrese la medida del radio -> ");
    scanf("%f", &radio);
    diametro = radio * radio;
    area = PI * diametro;
    printf("El area del circulo es de %.2f", area);

return 0;
}