#include <stdio.h>
#include <stdlib.h>

double half(double number){
 double result =number/2;
return result;
}


int main()
{   double number=10;
    double result=half(number);

    printf("Half number,%f",result);
    return 0;
}
