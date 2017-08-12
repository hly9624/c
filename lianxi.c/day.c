#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a,b,c;
    int d = 0;
    int days = 0;

loop:
    printf("请输入日期 按如下格式：2017-5-13\n");
    scanf("%d-%d-%d",&a,&b,&c);

    if(a < 0 || b < 0 || b > 12 || c < 1 || c > 31)
    {

        printf("输入有误，请重新输入\n");
        goto loop;
    
    }
    if((b == 4 || b == 6 || b == 9 || b == 11) && (c > 30))
    {
    
        printf("输入有误，请重新输入\n");
        goto loop;
    
    }
    if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
    {
        d = 1;
    }
    if(b == 2 && d == 0 && c > 28)
    {
        printf("输入有误，请重新输入\n");
        goto loop;
    }else if( b == 2 && c > 29)
    {
    
        printf("输入有误，请重新输入\n");
        goto loop;
    }
    switch(b)
    {
        case 12:days +=30;
        case 11:days +=31;
        case 10:days +=30;
        case 9:days +=31;
        case 8:days +=30;
        case 7:days +=31;
        case 6:days +=30;
        case 5:days +=31;
        case 4:days +=30;
        case 3:days = days + 28 + d;
        case 2:days +=31;
        case 1:days +=c;
    }
    printf("您输入的日期是%d年的第%d天\n",a,days);
    return 0;
}
