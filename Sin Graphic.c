/*
1. Write a program which will take three inputs from user and plot sine graph vertically.

Inputs are:
   Lower bound for sine graph (in degrees)
   Upper bound for sine graph (in degrees)
   Step size for sine graph (in degrees)
Notes:
   Lower bound should not be less than 0.
   Upper bound should not be greater than 180.
   Upper bound should be at least (Lower bound + step size).
   Step size can be input as 5 degrees for reference.
   For outputting dashes, you can divide sine value 0-1 range with 0.05 step size.

Sample inputs and output

start = 0, finish = 180, increase = 10;

#
   #
       #
          #
             #
               #
                 #
                   #
                    #
                    #
                    #
                   #
                 #
               #
             #
          #
       #
   #
#


*/

#include <stdio.h>
#include <math.h>


int main() {
    double ret, val, i;
    int x, start, finish, increase;

    printf("Please input lowerbound for sine (deg) ");
    scanf("%d", &start);
    printf("Please input upperbound for sine (deg) ");
    scanf("%d", &finish);
    printf("Please input step size for sine (deg) ");
    scanf("%d", &increase);
    printf("\n");
    
    val = M_PI / 180; 

    for (x = start; x <= finish; x += increase) {
        ret = sin(x * val);
        int space = round(ret * 20);
        //printf("The sine of %d is %d degrees\n", x, ret * 20);

        for (i = 0; i < space; i++) {
            printf(" ");
        }
        printf("#\n");

    }

    return (0);
}
