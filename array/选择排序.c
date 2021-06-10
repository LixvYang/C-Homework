#include<stdio.h>
void main() {
    int a[10],t;
    printf("请输入十个数\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=9;i++){
        for(int j=i+1;j<=10;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("排序后的顺序为\n");
    for(int i=0;i<10;i++){
        printf("%5d\n",a[i]);
    }

}