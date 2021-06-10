#include<stdio.h>
void main() {
    int a[10];
    int Max = a[0];
    int Min = a[0];
    int Maxpoint;
    int Minpoint;
    //输入
    for(int i = 0;i<10;i++) {
        scanf("%d",&a[i]);
    }
    //找最大值
    for(int i=0;i<10;i++) {
        if(a[i]>Max) {
            Max = a[i];
            Maxpoint = i;
        }
    }
    //找最小值
    for(int i =0;i<10;i++) {
        if(a[i]<Min){
            Min=a[i];
            Minpoint = i;
        }
    }
    printf("最大值是：%d,下标是%d;最小值是%d,下标是%d",Max,Maxpoint,Min,Minpoint);

}
