#include <stdio.h>
#include <math.h>

int main()
{
    int a = 2,b = 3, c = 1;

    float x,y;
    
    float x1,x2;

    x = -b / (2.0 * a);
    y = sqrt(b * b - 4.0 * a * c) / (2 * a);

    x1 = x + y;
    x2 = x - y;

    printf("x1 =%.2f,x2 =%.2f\n",x1,x2);
}
