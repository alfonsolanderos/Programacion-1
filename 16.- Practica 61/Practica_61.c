#include<stdio.h>

int main(){
    int i;
    float productos[10];

    for(i=0;i<10;i++){
        printf("Producto No. %i\n", i+1);
        printf("Ingrese el precio del producto a realizar el descuento -> ");
        scanf("%f",&productos[i]);
    }
    calculo(productos);
}

int calculo(float calc[]){
    int j;
    float descuento, total;

    printf("\n\nPrecio con descuento aplicado");
    for(j=0;j<10;j++){
        descuento = calc[j] * 0.30;
        total = calc[j] - descuento;
        printf("\n%.2f con descuento es -> %.2f", calc[j], total);
    }
}