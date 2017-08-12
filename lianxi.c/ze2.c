#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {56,89,7,2,8,583,1,3};
    int i,j,k,tmp;

    for(i = 0;i < 8 - 1;i++)   //循环次数
    {
        k = i;                 //假设定义一个最小的 
        for(j = i+1;j < 8;j++) //比较的次数 
        {
            if(a[k] > a[j])
            {
                k = j;         //当k>j时输出k=j
            }
        }           
        if(k != i)             //如果k不等于i时  
        {
            tmp = a[k];       //交换
            a[k] = a[i];
            a[i] = tmp;
        }
    }
    for(i = 0;i < 8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
