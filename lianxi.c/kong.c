#include <stdio.h>

char kong(char a[],int n)
{
    char i;

    for(i = 0;i < n;i++)
    {
        if(a[i] == ' ')
        {
            a[i] = '-';
        }
        printf("%c",a[i]);
    }
    printf("\n");
}
int main(int argc, const char *argv[])
{
    char a[40] = "h e l l o w o r l d";
    char i;

    kong(a,40);
    return 0;
}
