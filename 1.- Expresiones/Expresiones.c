#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a=0, b=5, c=12;
    a=b+c/2*10;
    printf("a=%d\n", a);
    b=a*a%3;
    printf("b=%d\n", b);
    c=20%3/2*5;
    printf("c=%d\n", c);
    b=b+c*a+(20-a);
    printf("b=%d\n", b);
    return 0;
}