#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[9] = {5,2,8,6,1,9,4,7,3};
    int i,j,tmp;

    for(i = 1;i < 9;i++)
    {
        if(a[i] < a[i - 1])
        {
            tmp = a[i];
            j = i - 1;
            while(j >= 0 && tmp < a[j])
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j +1] = tmp;
        }
    }
    for(i = 0;i < 9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
