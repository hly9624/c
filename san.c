#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int a = 3,b = 4,c = 5;
    float s,x;

    s = (a + b + c)/2.0;
    x = sqrt(s*(s -a)*(s - b)*(s - c));
    
    printf("%f\n",x);
    return 0;
}
