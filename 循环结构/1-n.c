#include<stdio.h>
void main() {
    int c,a;
    for(int a = 1;a<101;a++){
        c+=a;
    }
    printf("%d\n",c);
    
    int i,sum=0;
    i=1;
    do{
        sum=sum+i;
        i++;
    }
    while(i<=100);
    printf("%d\n",sum);

    int j,s=0;
    while(j<101){
        s+=j;
        j++;
    }
    printf("%d\n",s);
    
}

