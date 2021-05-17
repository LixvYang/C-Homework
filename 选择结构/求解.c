#include<math.h>
#include<stdio.h>
int main() {
   double a, b, c, x1, x2, t;
   scanf("%lf %lf %lf", &a, &b, &c); 
   t = b*b - 4*a*c; 
   if (t<0) {
      printf("It doesn't have any effective solution.\n"); 
      return 0; 
   }
   t = sqrt(t);
   x1 = (-b + t)/(2*a); 
   x2 = (-b - t)/(2*a); 
   printf("x1 = %lf, x2=%lf\n", x1, x2); 
   return 0;
}