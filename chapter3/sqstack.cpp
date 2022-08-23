#include <iostream>
using namespace std;
#define maxSize 100
typedef struct SqStack
{
    int data[maxSize];
    int top;
} SqStack;

void initStack(SqStack &st)
{
    st.top = -1;
}
int isEmpty(SqStack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}
int push(SqStack &st, int x)
{
    if (st.top == maxSize - 1)
        return 0;
    ++(st.top);
    st.data[st.top] = x;
    return 1;
}
int pop(SqStack &st, int &x)
{
    if (st.top == -1)
        return 0;
    x = st.data[st.top];
    --(st.top);
    return 1;
}
int main()
{
    return 0;
}