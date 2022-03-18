#include<stdio.h>
#include<ctype.h>
#define TAM 10

//Practica 45

int main(){
    char letra[TAM];
    int c;

    for(c=0;c<TAM;++c){
        letra[c]= getchar();
    }
    for(c=0;c<TAM;++c){
        putchar(toupper(letra));
    }
    
    return 0;
}
