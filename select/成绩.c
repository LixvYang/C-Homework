#include<stdio.h>

void main(){
    float score;
    printf("Input a Score(0-100):\n");
    scanf("%f",&score);
    switch((int)score/10)
    {
        case 10:
        case 9:
            printf("The Grade is 优\n");
            break;
        case 8:
            printf("The Grade is 良\n");
            break;
        case 7:
            printf("The Grade is 中\n");
            break;
        case 6:
            printf("The Grade is 及格\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("The Grade is 不及格\n");
            break;
        default:
            printf("Input DataError\n");
    }
}