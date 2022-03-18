#include<stdio.h>

//Calcular el area de un cuadrado

int main(){
    int area, lado;
    printf("Calcular el area de un cuadrado \n");
    printf("Ingresa la medida de un lado del cuadrado -> ");
    scanf("%i", &lado);
    area = lado * lado;
    printf("El area resultante es de: %i", area);


return 0;
}