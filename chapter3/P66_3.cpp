//判断序列是否合法
#include <iostream>
using namespace std;
bool isok(char s[])
{
    int I = 0, O = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'I')
            I++;
        else
            O++;
        if (O > I)
            return false;
        i++;
    }
    if (I == O)
        return true;
    else
        return false;
}
int main()
{
    char s[9] = {'I', 'I', 'I', 'I', 'O', 'O', 'O', 'O', '\0'};
    if (isok(s))
        cout << "合法";
    else
        cout << "非法";

    return 0;
}