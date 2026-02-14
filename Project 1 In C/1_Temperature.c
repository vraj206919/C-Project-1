

#include<stdio.h>

int main(){
     
    int temperature,celsius;

     printf("\nThe Temperature Is in celsius :");

     scanf("%d",&temperature);

     celsius = (9.0/5.0 * temperature ) + 32;

     printf("The temperature in fahrenheit = %.1d",celsius);

    return 0;
}