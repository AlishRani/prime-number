#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    for(i=2,i<a,i++){
          if(a%i==0){
              printf("a is not a prime number");
          }
          else{
              printf("a is prime number");
          }
   }
   return 0;
}