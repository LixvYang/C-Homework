#define PI 3.14
#include<stdio.h>
#include<math.h>
void main() {
    int x,y;
    printf("请输入下x:\n");
    scanf("%d",&x);
    if(x>=PI/2){
        y=sqrt(x+sin(3*x));
    }if (x<-PI/2){
        y=2*x*x*x+3*cos(x)+5;
    } else {
        y=(x-1)*(x-1)*(x-1)/(x+2)/(x+2)/(x+2)+5*x;
    }
    printf("y=%d",y);
    
}