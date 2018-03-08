#include <stdio.h>
#include <cs50.h>
#include <math.h>
/*This program prints an integer that's the result of the polynomial x^2+x*/

int main(){
int x = get_int("x: ");{
    printf("%d\n", x * x + x);
}
    return 0;
}
