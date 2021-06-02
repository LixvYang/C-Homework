#include<stdio.h>
void main() {
    int zuhe(int m,int n);
    int m,n;
    printf("请输入M,N\n");
    scanf("%d,%d\n",&m,&n);
    printf("结果是%d\n",zuhe(m,n));

}

int zuhe(int m,int n) {
    int a = 1,b = 1, c = 1,d;
	for( int  i = 1 ; i <= m ; i++ )
		a = a*i;
	for( int i = 1 ; i <= n  ; i++  )
		b = b*i;
	for( int i = 1 ; i <= m-n ; i++  )
		c = c*i;

    d = a/(b*c);

	return d;
}