#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[4][4] = {4,8,7,5,9,6,3,2,45,12,35,86,92,25,18,49};
    int i,j,k,x,y,find = 0;

  printf("数组a:\n");

  for(i = 0;i < 4;i++)
  {
    for(j = 0;j < 4;j++)
    {
      printf("%3d ",a[i][j]);

    }
    printf("\n");
  }

  for(i = 0;i < 4;i++)
  {
    y = 0;
    for(j = 1;j < 4;j++)
    {
      if(a[i][j] >a[i][y])

      y = j;
    }
    k = 1;
    for(x = 0;x < 4;x++)
    {
      if(a[x][y] > a[i][y])
      {
      k = 0;
      break;
      }
    }
    if(k)
    {
      printf("ad is a[%d][%d] = %d\n",i,y,a[i][y]);
      find = 1;
    }
  }
  if(!find)
  {
    printf("no\n");
  }


  return 0;
}
