#include <iostream>
using namespace std;
typedef struct QNode
{
    int data;
    struct QNode *next;
} QNode;
typedef struct LiQueue
{
    QNode *front;
    QNode *rear;
} LiQueue;

int main()
{
    return 0;
}