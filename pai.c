#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[8] = {4,2,6,8,1,3,7,5};
    int i,j,k;

    for(i = 0;i < 8 - 1;i++)   //ѭ�����ܴ���
    {
        for(j = 0;j < 8 - i - 1;j++) //ÿ�ε��ܱȽϴ���
        {
            if(a[j] > a[j + 1])   //����Ԫ�رȽ�
            {
                k = a[j];
                a[j] = a[j +1];     //����
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
