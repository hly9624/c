#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a;

    scanf("%d",&a);

    //˫���� if else
    if(a > 0 && a < 20)
    {
            printf("0 < a < 20\n");
    }
    else if(a < 30)
    {
        //Ƕ��һ��if
        printf("20 <= 0 < 30\n");
        
    }
    else if(a < 50)
     {
         printf("30 <= a <50\n");
     }

     else
     {
         printf("a >= 50\n");
     }  
    return 0;
}
