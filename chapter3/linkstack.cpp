#include <iostream.h>
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;
void initStack(LNode *&lst)
{
    lst = (LNode *)malloc(sizeof(LNode));
    lst->next = NULL;
}
int isEmpty(LNode *lst)
{
    if (lst->next == NULL)
        return 1;
    else
        return 0;
}
void push(LNode *lst, int x)
{
    LNode *p;
    p = (LNode *)malloc(sizeof(LNode));
    p->next = NULL;
    //以下三句就是链表的头插法
    p->data = x;
    p->next = lst->next;
    lst->next = p;
}
int pop(LNode *lst, int &x)
{
    LNode *p;
    if (lst->next == NULL)
        return 0;
    //以下就是单链表的删除操作
    p = lst->next;
    x = p->data;
    lst->next = p->next;
    free(p);
    return 1;
}