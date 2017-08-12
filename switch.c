#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a;

    scanf("%c",&a);

    switch(a)
    {
        case 'A': printf("85~100\n"); break;
        case 'B': printf("70~84\n"); break;
        case 'C': printf("60~69\n"); break;
        case 'D': printf("< 60\n"); break;
        default : printf("error\n");
    }
    return 0;
}
