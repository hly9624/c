#include <stdio.h>

int dgui(int n)
{
     if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return  n * dgui(n - 1);
    }
}    
int main(int argc, const char *argv[])
{
    int a,n;

    scanf("%d",&a);

    n = dgui(a);

    printf("a! = %d\n",n);
    
    return 0;
}
