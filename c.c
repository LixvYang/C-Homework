#include<stdio.h>
#define NDIG 1000

void main() {
    char N[NDIG];
    gets(N);

    int i,num[10]={};
    //字符串到'\0'结束
    for (i=0;N[i]!='\0';i++) {
        num[N[i]-'0']++; //保存每位数出现的频次到num[]中
    }

    for (i=0;i<10;i++){
        if(num[i]){
            printf("%d:%d\n",i,num[i]);
        }
    }
}