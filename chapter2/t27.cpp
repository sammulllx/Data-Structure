#include <iostream>
using namespace std;
#define maxSize 100
typedef struct Sqlist
{
    int data[maxSize];
    int length;
} Sqlist;
int deleteElem(Sqlist &L, int p, int &e)
{
    if (p < 0 || p > L.length - 1)
        return 0;
    e = L.data[p];
    for (int i = p; i < L.length - 1; i++)
    {
        L.data[i] = L.data[i + 1];
    }
    (L.length)--;
    return 1;
}
int main()
{
    return 0;
}