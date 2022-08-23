#include <iostream>
#define maxSize 100
using namespace std;
typedef struct Sqlist
{
    int data[maxSize];
    int length;
} Sqlist;

int findElem(Sqlist L, int e)
{
    for (int i = 0; i < L.length; i++)
    {
        if (e == L.data[i])
            return i;
    }
    return -1;
}
int insertElem(Sqlist &L, int p, int e)
{
    if (p < 0 || p > L.length || L.length == maxSize)
        return 0;
    for (int i = L.length - 1; i >= p; i--)
    {
        L.data[i + 1] = L.data[i];
    }
    L.data[p] = e;
    (L.length)++;
    return 1;
}
void initList(Sqlist &L)
{
    L.length = 0;
}
int getElem(Sqlist L, int p, int &e)
{
    if (p < 0 || p > L.length - 1)
        return 0;
    e = L.data[p];
    return 1;
}
int main()
{
    return 0;
}