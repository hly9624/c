#include <stdio.h>

struct Stu{         //结构体类型
    int id;
    char name[64];
    int age;
    float salary;
}c = {3,"wangwu",24,8000};    //可以直接定义变量

struct{
    int id;
    char name[64];
    int age;
    float salary;
}f;                       //定义一个一次性的struct变量
struct Stu b,d;  //定义一个类型是struct Stu 类型的变量

int main(int argc, const char *argv[])
{
    struct Stu a = {1,"lisi",23,8000},e = {2,"zhaoliu",29,15000};

    a = c;  //变量之间可以互相赋值
    
    e.age = 25;    //单独赋值



    //必须单独打印
    printf("%d\n",a.id);     
    printf("%s\n",a.name);
    printf("%d\n",a.age);
    printf("%f\n",a.salary);
    return 0;
}
