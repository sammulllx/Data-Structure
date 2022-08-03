//逆置线性表
#include <bits/stdc++.h>
using namespace std;
#define Max 50
struct SqList
{
    int a[Max] = {1, 4, 6, 3, 2, 8, 7};
    int length = 7;
};
void reverse(SqList &L)
{
    int temp;
    for (int i = 0; i < L.length / 2; i++)
    {
        temp = L.a[i];
        L.a[i] = L.a[L.length - i - 1];
        L.a[L.length - i - 1] = temp;
    }
}
int main()
{
    SqList L;
    for (int i = 0; i < L.length; i++)
        cout << L.a[i] << " ";
    cout << endl;
    reverse(L);
    for (int i = 0; i < L.length; i++)
        cout << L.a[i] << " ";
    return 0;
}