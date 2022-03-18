#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    char cadena[26];
    int total = 0;

    printf("Introduce una oracion(25 caracteres maximo) -> ");
    gets(cadena);

    total=strlen(cadena);
    printf("La longitud de la cadena es -> %i\n", total);
    getch();

}