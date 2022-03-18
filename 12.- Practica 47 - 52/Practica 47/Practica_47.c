#include<stdio.h>

//Practica 47
//Funciones sin paso de parametros

int color(){
    printf("Rojo\n");
    
    return 0;
}

int color1(){
    printf("Morado\n");
    color();
    printf("Verde\n");

    return 0;
}

int color2(){
    color1();
    printf("Azul\n");

    return 0;
}

int main(){
    color();
    color1();
    color2();

    system("PAUSE");

    return 0;
}
