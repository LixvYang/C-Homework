#include<stdio.h>
void main() {
	int a,b,c,num;
	printf("Input number\n");
	scanf("%d",&num);
	while(num<0) {
		num=num*-1;
	}
	a=num%10;
	b=num%100/10;
	c=num/100;
    num = a*100+b*10+c;
	printf("reversal number is %d\n",num);
}