#include <stdio.h>

void Myfunc(){
float base,result=1;
int exponent;

  printf("\nEnter base : ");
  scanf("%f",&base);

  printf("Enter exponent :");
  scanf("%d",&exponent);

  int i =1;

  while(i <=exponent)
  {
    result *= base;
    i++;
  }
  printf("\n%.3f^%d = %.3f",base,exponent,result);
}
int main(void){
  Myfunc();
  return 0;
}
