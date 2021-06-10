#define pi 3.1415926
#include<stdio.h>
void main() {
    float area;
    int r;
    for (r = 1;r<=10;r++) {
        area = pi * r * r;
        if (area >100) {
            break;
        }
        printf("r=%d,area=%.2f\n",r,area);
        
    }
}