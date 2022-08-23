#include <iostream>
using namespace std;
#define maxSize 100
typedef struct Sqlist
{
    int data[maxSize];
    int length;
} Sqlist;
//在递增顺序表中插入一个元素x使得顺序表仍然递增有序
int findElem(Sqlist L, int x)
{
    int i;
    for (int i = 0; i < L.length; i++)
    {
        if (x < L.data[i])
        {
            return i;
        }
    }
    return i;
}
void insertElem(Sqlist &L, int x)
{
    int p, i;
    p = findElem(L, x);
    for (i = L.length - 1; i >= p; i--)
    {
        L.data[i + 1] = L.data[i];
    }
    L.data[p] = x;
    (L.length)++;
}