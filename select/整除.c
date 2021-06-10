#include<stdio.h>
void main(){
    int a;
    printf("Input A\n");
    scanf("%d",&a);
    

    if(a>=5 && a%3 ==0 && a%5 == 0){
        printf("a 3 5");
    }else if(a>=3 && a%3 == 0){
        printf("a 3");
    }else if(a >= 5 && a%5 == 0){
        printf("a 5");
    }else if(a>=7 && a %3 !=0 && a%5 != 0 && a%7 != 0){
        printf("cant157");
    }
}