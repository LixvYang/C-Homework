#define PI 3.1415
#include<stdio.h>

void main(){
    float r,v,s;
    printf("Please input r:\n");
    scanf("%f",&r);
    v=4 * PI * r * r *r / 3;
    s=4 * PI * r* r;
    printf("v=%f,s=%f",v,s);
}