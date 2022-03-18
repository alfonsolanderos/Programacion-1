#include<stdio.h> //Selectiva simple

int main(){
    int ed;
    printf("Dame tu edad\n");
    scanf("%i", &ed);
    if (ed<18){
            printf("Eres menor de edad\n");
            printf("No puedes votar\n");
    }
    printf("Que tengas un buen dia\n");

    return 0;
}
