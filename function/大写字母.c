#include<stdio.h>
void main() {
    char daxie(char b);
    char a,b;
    scanf("%c", &a);
    printf("%c\n",daxie(a));
    
}

char daxie(char b) {
    int c;
    c = b - 32;
    return c;
}