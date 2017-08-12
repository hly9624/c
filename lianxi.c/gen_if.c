#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int a,b,c;

    float x,y;

    float x1,x2;

    scanf("%d%d%d",&a,&b,&c);

    if((b * b - 4 * a * c) > 0)
    {
        x = -b / (2.0 * a);
        y = sqrt(b * b - 4 * a *c);
        
        x1 = x + y;
        x2 = x - y;
        printf("x1=%f,x2=%f\n",x1,x2);
    }
    else if((b * b - 4 * a * c) == 0)
    {
    
        x = -b / (2.0 * a);
        y = sqrt(b * b - 4 * a *c);

        x1 = x + y;
        x2 = x - y;
        printf("x1=%f,x2=%f\n",x1,x2);
    }
    else if((b * b - 4 * a * c) < 0)
    {
        
        x = -b / (2.0 * a);
        y = sqrt(b * b - 4 * a *c);

        x1 = x + y;
        x2 = x - y;

        printf("无实数根\n");
    }
    
    return 0;
}
