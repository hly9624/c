#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {1,2,3,4,5,6,7,8};
    int i;
    
    for(i = 0;i < 8;i++)
    {
        if(a[i] % 2 !=0)
        {
            printf("%d ",a[i]);
        }
    }
    for(i = 0;i < 8;i++)
    {
            if(a[i] % 2 == 0)
            {
                printf("%d ",a[i]);        
            }
    }
    printf("\n");
    return 0;
}

/*
    for(i = 0;i < 8;i++)
    {
        printf("%d ",a[i]);
    }
*/
