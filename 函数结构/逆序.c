#include<stdio.h>

void main(){
    int nixu(int a,int b);
    int demo1,demo2;
    printf("Input:\n");
    scanf("%d,%d",&demo1,&demo2); 
    printf("%d,%d\n",nixu(demo1,demo2));
    
}

int nixu(int a,int b) {
    int t;
    
    t = a;
    a = b;
    b = t;
 
    return a,b;
}