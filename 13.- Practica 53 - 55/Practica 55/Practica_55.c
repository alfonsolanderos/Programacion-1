#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Practica 55 - Menu y operaciones

float res;

int raiz(float num){
    system("cls");
    printf("A seleccionado raiz cuadrada\n");
    printf("\nIngrese el numero a calcular la raiz cuadrada -> ");
    scanf("%f", &num);
    res = sqrt(num);
    printf("EL numero resultante es -> %.f\n", res);
    system("PAUSE");

    return main();
}

int potencia(float num){
	int poten;
	
    system("cls");
    printf("A seleccionado potencia\n");
    printf("\nIngrese a elevar -> ");
    scanf("%f", &num);
    printf("Ingrese la potencia -> ");
    scanf("%i", &poten);
    res = pow(num, poten);
    printf("El numero resultante es -> %.f\n", res);
    system("PAUSE");

    return main();
}

int coseno(float num){
    system("cls");
    printf("A seleccionado coseno\n");
    printf("Ingrese el numero a calcular el coseno -> ");
    scanf("%f", &num);
    res = cos(num);
    printf("El numero resultante es -> %.3f\n", res);
    system("PAUSE");

    return main();
}

int logaritmo(float num){
    system("cls");
    printf("A selecciconado logaritmo natural\n");
    printf("\nIngrese el numero a calcular el logaritmo natural -> ");
    scanf("%f", &num);
    res = log(num);
    printf("EL numero resultante es -> %.3f\n", res);
    system("PAUSE");

    return main();
}

int main(){
    int op, select;

    system("cls");
    printf("Menu\n");
    printf("\n1.- Raiz cuadrada\n");
    printf("2.- Potencia\n");
    printf("3.- Coseno\n");
    printf("4.- Logaritmo natural\n");
    printf("5.- Salir\n");
    printf("Seleccione la opcion deseada -> ");
    scanf("%i", &op);

    if(op==1){
        select = raiz(res);
    }
    else if(op==2){
        select = potencia(res);
    }
    else if(op==3){
        select = coseno(res);
    }
    else if(op==4){
        select = logaritmo(res);
    }
    else{
        exit(0);
    }
    
    return 0;
}