#include <iostream>
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;
void showlist(LNode *C)
{
    LNode *s;
    s = C->next;
    while (s != NULL)
    {
        cout << s->data << ' ';
        s = s->next;
    }
    cout << endl;
}
void createlistR(LNode *&C, int a[], int n)
{
    LNode *s, *r;
    C = (LNode *)malloc(sizeof(LNode));
    C->next = NULL;
    r = C;
    for (int i = 0; i < n; i++)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = a[i];
        r->next = s;
        r = r->next;
    }
    r->next = NULL;
}
void createlistF(LNode *&C, int a[], int n)
{
    LNode *s;
    C = (LNode *)malloc(sizeof(LNode));
    C->next = NULL;
    for (int i = 0; i < n; i++)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = a[i];
        s->next = C->next;
        C->next = s;
    }
}
int findAndDelete(LNode *C, int x)
{
    LNode *p, *q;
    p = C;
    while (p->next != NULL)
    {

        if (p->next->data == x)
            break;
        p = p->next;
    }
    if (p->next == NULL)
        return 0;
    else
    {
        q = p->next;
        p->next = p->next->next;
        free(q);
        return 1;
    }
}
int main()
{
    int array[8] = {1, 4, 2, 5, 6, 7, 2, 1};
    LNode *A, *B;
    createlistR(A, array, 8);
    createlistR(B, array, 8);
    showlist(A);
    showlist(B);

    return 0;
}