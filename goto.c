#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int sun = 0;

loop: if(i <= 100)
    {
        sun += i;
        i++;
        goto loop;
    }
      printf("%d\n",sun);
    return 0;
}
