#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x = -5;
    int abs_x = abs(x);
    
    printf("abs(x): %d\n", abs_x);

    double y = -2.5;
    double fabs_y = fabs(y);

    printf("fabs(y): %f\n", fabs_y);

    return 0;
}
