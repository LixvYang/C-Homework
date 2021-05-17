#include<stdio.h>
void main(){
    float c,k;
    printf("输入华氏温度\n");
    scanf("%f",&c);
    k=c*9.0/5.0 + 32;
    printf("%f",k);
}