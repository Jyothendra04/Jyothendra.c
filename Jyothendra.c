#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float num1, num2;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &num1, &operator, & num2);

  switch(operator){
    case '/': answer = num1/num2;
      break;
    case '*': answer = num1*num2;
      break;
    case '+': answer = num1+num2;
      break;
    case '-': answer = num1-num2;
      break;
    case '^': answer = pow(num1,num2);
      break;
    case 'r': answer = sqrt(num2);
      break;
    default: goto fail; }
  printf("%.9g%c%.9g =  %.6g\n\n",num1,operator, num2, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
