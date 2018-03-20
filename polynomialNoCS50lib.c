#include <stdio.h>
/*this program will make a polynomial equation of the form x^2+x*/

float x, *p;

int main(){
  p = &x;
  //first it will ask the user for an input
  printf("Enter a number:\n");
  scanf("%f", &x);
  printf("%f\n", x*x+x);
}
