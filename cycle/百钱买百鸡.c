#include<stdio.h>
void main() {
    int i,j,k;
    printf("百钱买百鸡问题如下解：\n");
    for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
            for(k=0;k<=100-i-j;k++){
                if(4*i +3*j +k/3 == 100 && k%3 == 0 &&i+j+k==100) {
                    printf("cock:%d hen:%d chick:%d\n",i,j,k);
                }
            }
        }
    }

}