#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {1,34,46,5,19,67,98,56};
    int max,i;
    int n;
    max = a[0];

    for(i = 0;i < 8;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
        if(a[i] == max)
        {
            n = i;
        }
    }
    printf("a[%d]=%d\n",n,max);
    
    return 0;
}
