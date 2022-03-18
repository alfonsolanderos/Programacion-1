#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Practica 52 - Menu y operaciones

int op, base, poten, select;
float num, res=0;

int raiz(){
    
    system("cls");
    printf("A seleccionado raiz cuadrada \n");
	printf("\nIngrese el numero a calcular la raiz cuadrada -> ");
	scanf("%f", &num);
	res = sqrt(num);
    printf("El numero resultante es -> %.f\n", res);
    system("PAUSE");
    
    return main();
}

int potencia(){

    system("cls");
    printf("A seleccionado potencia\n");
    printf("\nIngrese el numero a elevar -> ");
    scanf("%i", &base);
    printf("Ingrese la potencia -> ");
    scanf("%i", &poten);
    res = pow(base, poten);
    printf("El numero resultante es -> %.f\n", res);
    system("PAUSE");

    return main();
}

int coseno(){

    system("cls");
    printf("A seleccionado coseno\n");
    printf("Ingrese el numero a calcular el coseno -> ");
	scanf("%f", &num);
	res = cos(num);
    printf("El numero resultante es -> %.3f\n", res);
    system("PAUSE");

    return main();
}

int logaritmo(){

    system("cls");
    printf("A seleccionado logaritmo natural\n");
    printf("Ingrese el numero a calcular el lagoritmo natural -> ");
	scanf("%f", &num);
	res = log(num);
    printf("El numero resultante es -> %.3f\n", res);
    system("PAUSE");

    return main();
}

int main(){

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
        select = raiz();
    }
    else if(op==2){
        select = potencia();
    }
    else if(op==3){
        select = coseno();
    }
    else if(op==4){
        select = logaritmo();
    }
    else{
        exit(0);
    }

    return 0;
}