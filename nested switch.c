#include <stdio.h>
int main()
{
    int a,b;
    printf("XOR gate truth table: ");
    scanf("%d %d",&a,&b);

 switch(a){
   case 0:

   switch(b){
     case 0:printf("0");
        break;
     case 1:printf("1");
     }
     break;

    case 1:
    switch(b){
      case 0:printf("1");
        break;
      case 1:
          switch(b){
            case 1: printf("0");}

     }
     break;
     default:
         printf("Choice other than 1 or 0");
         break;

 }


}
