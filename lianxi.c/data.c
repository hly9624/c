#include <stdio.h>
 /*
  *输入一个日期，求出这个日期在这一年中是第几天。
  *注意区分平年闰年
  */

int main(int argc, char const *argv[]) {

  int year,mon,day;
  int flag = 0;
  int days = 0; //存储最终日期

  loop:
  printf("输入要查询日期 按照如下格式 2017-5-23 ：\n");

  scanf("%d-%d-%d",&year,&mon,&day);

  if(year < 0 || mon < 1 || mon > 12 || day < 1 || day > 31)
  {
    printf("你输入的日期有误，请重新输入。\n");
    goto loop;
  }

  if((mon == 4 || mon == 6 || mon == 9 || mon == 11) && day > 30)
  {
    printf("你输入的日期有误，请重新输入。\n");
    goto loop;
  }

  if((year % 400 == 0) || (year % 4 == 0  && year % 100 != 0))
  {
    flag = 1;
  }

  if(mon == 2 && flag == 0 && day > 28)
  {
    printf("你输入的日期有误，请重新输入。\n");
    goto loop;
  }
  else if(mon == 2 && day > 29){
    printf("你输入的日期有误，请重新输入。\n");
    goto loop;
  }

  switch (mon) {
    case 12:days += 30;
    case 11:days += 31;
    case 10:days += 30;
    case 9:days += 31;
    case 8:days += 31;
    case 7:days += 30;
    case 6:days += 31;
    case 5:days += 30;
    case 4:days += 31;
    case 3:days = days + 28 + flag;
    case 2:days += 31;
    case 1:days += day;
  }

  printf("您输入的日期是%d年的第%d天\n",year,days);

  return 0;
}
