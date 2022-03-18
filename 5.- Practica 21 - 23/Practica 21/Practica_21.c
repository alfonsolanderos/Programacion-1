#include<stdio.h>//Practica 21

int main (){
    int num = 1, lim;
    printf("�Hasta que numero deseas visualizar tu serie? -> ");
    scanf("%i", &lim);
    while(num <= lim){
        printf("%i\n",num);
        num++;
    }
system("PAUSE");
return 0;
}