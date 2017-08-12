#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {4,2,6,8,1,3,7,5};
    int i,j,k;

    for(i = 0;i < 8 - 1;i++)   //循环的总次数
    {
        for(j = 0;j < 8 - i - 1;j++) //每次的总比较次数
        {
            if(a[j] > a[j + 1])   //相邻元素比较
            {
                k = a[j];
                a[j] = a[j +1];     //交换
                a[j + 1] = k;
            }
        }
    }
    for(i = 0;i < 8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
