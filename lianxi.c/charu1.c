#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {6,1,4,8,2,7,3,5};
    int i,j,tmp;

    for(i = 1;i < 8;i++)
    {
        if(a[i] < a[i -1])
        {
            tmp =  a[i];
            j = i - 1;
            while(j >= 0 && tmp < a[j])
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tmp;
        }
    }
    for(i = 0;i < 8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
