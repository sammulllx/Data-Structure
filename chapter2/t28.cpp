//合并A，B链表为非递减有序表C
#include <iostream>
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;

void buildlist(LNode *&l, int a[], int n)
{
    l = (LNode *)malloc(sizeof(LNode));
    LNode *s, *r = l;
    for (int i = 0; i < n; i++)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = a[i];
        r->next = s;
        r = r->next;
    }
    r->next = NULL;
}

void showlist(LNode *L)
{
    LNode *s = L->next;
    while (s)
    {
        cout << s->data << " ";
        s = s->next;
    }
    cout << endl;
}

void merge(LNode *A, LNode *B, LNode *&C)
{
    LNode *p = A->next;
    LNode *q = B->next;
    C = A;
    C->next = NULL;
    free(B);
    LNode *r;
    r = C;
    while (p != NULL && q != NULL)
    {
        if (p->data <= q->data)
        {
            r->next = p;
            p = p->next;
            r = r->next;
        }
        else
        {
            r->next = q;
            q = q->next;
            r = r->next;
        }
    }
    r->next = NULL;
    if (p != NULL)
        r->next = p;
    if (q != NULL)
        r->next = q;
}
int main()
{
    int n = 8;
    int a[8] = {1, 4, 5, 7, 8, 11, 13, 14};
    int b[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    LNode *A, *B, *C;
    buildlist(A, a, n);
    buildlist(B, b, n);
    showlist(A);
    showlist(B);
    merge(A, B, C);

    showlist(C);

    return 0;
}