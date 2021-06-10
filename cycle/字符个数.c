#include<stdio.h>
void main() {
    printf("Input:\n");
    int i=0;
    while (getchar()!='\n')
    {
        i++;
    }

    printf("%d",i);
}