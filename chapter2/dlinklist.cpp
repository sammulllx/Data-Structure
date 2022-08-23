#include <iostream>
using namespace std;
typedef struct DLNode
{
    int data;
    struct DLNode *prior;
    struct DLNode *next;
} DLNode;
void createdlistR(DLNode *&C, int a[], int n)
{
    DLNode *s, *r;
    C = (DLNode *)malloc(sizeof(DLNode));
    C->next = NULL;
    C->prior = NULL;
    r = C;
    for (int i = 0; i < n; i++)
    {
        s = (DLNode *)malloc(sizeof(DLNode));
        s->data = a[i];
        r->next = s;
        s->prior = r;
        r = s;
    }
    r->next = NULL;
}
DLNode *findNode(DLNode *C, int x)
{
    DLNode *p = C->next;
    while (p != NULL)
    {
        if ((p->data == x))
            break;
        p = p->next;
    }
    return p;
}

int main()
{
    return 0;
}