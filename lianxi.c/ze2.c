#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {56,89,7,2,8,583,1,3};
    int i,j,k,tmp;

    for(i = 0;i < 8 - 1;i++)   //ѭ������
    {
        k = i;                 //���趨��һ����С�� 
        for(j = i+1;j < 8;j++) //�ȽϵĴ��� 
        {
            if(a[k] > a[j])
            {
                k = j;         //��k>jʱ���k=j
            }
        }           
        if(k != i)             //���k������iʱ  
        {
            tmp = a[k];       //����
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
