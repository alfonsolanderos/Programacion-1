#include<stdio.h>

//Practica 9

int main(){
    int ed;
    printf("Dame tu edad -> ");
    scanf("%i", &ed);
    if(ed<18){
        printf("Eres menor de edad \n");
        printf("No puedes votar \n");
    }
    else {
        printf("Eres mayor de edad \n");
        printf("Ya puedes votar \n");
    }
    printf("Que tengas un buen dia! \n");
return 0;
}
