#include <stdio.h>

struct Stu{         //�ṹ������
    int id;
    char name[64];
    int age;
    float salary;
}c = {3,"wangwu",24,8000};    //����ֱ�Ӷ������

struct{
    int id;
    char name[64];
    int age;
    float salary;
}f;                       //����һ��һ���Ե�struct����
struct Stu b,d;  //����һ��������struct Stu ���͵ı���

int main(int argc, const char *argv[])
{
    struct Stu a = {1,"lisi",23,8000},e = {2,"zhaoliu",29,15000};

    a = c;  //����֮����Ի��ำֵ
    
    e.age = 25;    //������ֵ



    //���뵥����ӡ
    printf("%d\n",a.id);     
    printf("%s\n",a.name);
    printf("%d\n",a.age);
    printf("%f\n",a.salary);
    return 0;
}
