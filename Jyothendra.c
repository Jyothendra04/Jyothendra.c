#include<stdio.h>
#include<stdlib.h>
int main() {
    int num1,num2=10,c;
    printf("Enter num1 value: ");
    scanf("%d", &num1);
    printf("Enter num2 value: ");
    scanf("%d", &num2);
    printf("Enter operation: ");
    scanf("%d", &c);
switch(c){
    case 1:
    printf("%d", num1+num2);
    printf("\n%d", num1-num2);
    printf("\n%d", num1%num2);
    printf("\n%d", num1*num2);
    printf("\n%d", num1/num2);
    break;
    case 2:
    printf("%d", num1<num2);
    printf("\n%d", num1>num2);
    printf("\n%d", num1<=num2);
    printf("\n%d", num1>=num2);
    printf("\n%d", num1==num2);
    printf("\n%d", num1!=num2);
    break;
    case 3:
    printf("%d", num1&&num2);
    printf("\n%d", num1||num2);
    printf("%d", num1=!num2);
    break;
    case 4:
    printf("%d", num1&num2);
    printf("\n%d", num1|num2);
    printf("\n%d", num1<<num2);
    printf("\n%d", num1>>num2);
    break;
    case 5:
    printf("%d", num1++);
    printf("\n%d", num1--);
    printf("\n%d", num2++);
    printf("\n%d", num2--);
    break;
    case 6:
    printf("%d", num1=20);
    printf("\n%d", num1+=20);
    case 8: 
    exit(0);
    default:
    printf("Enter correct choice value: ");
}
    return 0;
}
