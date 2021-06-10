#include<stdio.h>
int main()
{
    int a = 1, b = 2, i, j;
    float s = 0.0;
    for (i = 1; i <= 30; i = i + 1)
    {
        s = s + 1.0 * a / b;
        j = a; 
        a = b;
        b = b + j;
    }
    printf("%f", s);
}