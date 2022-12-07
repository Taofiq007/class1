#include <stdio.h>

void main()

{
    int num1,num2;
    float sum;

    printf("Enter two numbers: " );
    scanf("%d %d",&num1,&num2);

    sum = num1+num2;
    printf("%d + %d =%0.1f\n",num1,num2,sum);

    sum = num1 - num2;
    printf("%d - %d =%0.1f\n",num1,num2,sum);

    sum = num1 * num2;
    printf("%d * %d =%0.1f\n",num1,num2,sum);

    sum = num1 / num2;
    printf("%d / %d =%0.1f\n",num1,num2,sum);
    
      sum = num1 % num2;
    printf("%d % %d =%0.1f\n",num1,num2,sum);



}
