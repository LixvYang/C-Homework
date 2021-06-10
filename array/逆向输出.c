#include<stdio.h>
void main() {
    int a[10];
    printf("请输入：");
    for(int i=0;i<10;i++) {
        scanf("%d",&a[i]);
    }

    for(int i=9;i>=0;i--) {
        printf("%d",a[i]);
    }

}