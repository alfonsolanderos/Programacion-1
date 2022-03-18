#include<stdio.h>

//Calcular el area de un rectangulo

int main(){
    int area, base, altura;
    printf("Calcular el area de un rect�ngulo \n");
    printf("Ingrese la medida de la base - > ");
    scanf("%i", &base);
    printf("Ingrese la medida de la altura -> ");
    scanf("%i", &altura);
    area = base * altura;
    printf("El resultado del area total es de: %i", area);


return 0;
}