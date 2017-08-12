#include <stdio.h>

int main(int argc, const char *argv[])
{
    float a,b,c;
    float tmp;

    scanf("%f%f%f",&a,&b,&c);

    printf("a = %.2f,b = %.2f,c = %.2f\n",a,b,c);


    if(a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    if(a > c)
    {
        tmp = a;
        a = c;
        c = a;
    }

    if(b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    printf("a = %.2f,b = %.2f,c = %.2f\n",a,b,c);
    return 0;
}
