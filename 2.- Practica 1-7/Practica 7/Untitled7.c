#include<stdio.h>

//Calcular el area de un trapecio

int main(){
    float area, basemenor, basemayor, altura;
    printf("Calcular area de un trapecio \n");
    printf("Ingresa la medida de la base mayor -> "); scanf("%f", &basemayor);
    printf("Ingresa la medida de la base menor -> "); scanf("%f", &basemenor);
    printf("Ingresa la medida de la altura -> "); scanf("%f", &altura);
    area = (basemayor + basemenor) / 2 * altura;
    printf("El area resultante es de : %.2f", area);

return 0;
}