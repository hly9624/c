#include <stdio.h>
#include <stdlib.h>

/*
typedef struct stu{
    int id;
    char name[64];
    int age;
}datatype;
*/
typedef int datatype;

typedef struct node{
    datatype data;
    struct node *next;
}linknode,*linklist;

linklist link_create()
{
    linklist p = NULL;
    if((p = malloc(sizeof(linknode))) == NULL)
    {
        printf("malloc error!\n");
        return NULL;
    }
    p->data = 0;
    p->next = NULL;

    return p;
}

void show(linklist H)
{
    while(H != NULL)
    {
        printf("%d ",H->data);
        H = H->next; 

    }
    printf("\n");
}

int main(int argc, const char *argv[])
{
    /*
    linknode a = {{2,"lisi",34},NULL};
    linklist head = &a;

    printf("%d\n",head->data.age); 
    */

    /*
    linknode a = {3,NULL};
    linklist head = &a;

    printf("%d\n",head->data);
    */
    
    linklist p = NULL;
    if((p = link_create()) == NULL)
    {
        puts("error!\n");
        return 0;
    }
    show(p);

    return 0;
}
//free()ÊÍ·ÅÄÚ´æ¿Õ¼ä
