 //二叉树找两个节点的公共祖先，一个节点可以是自己的祖先

#include<iostream>
using namespace std;
typedef struct Tree
{
     int data[12]={-1,1,2,3,-1,4,-1,5,-1,-1,-6,-1};
}Tree;
int findA(Tree T,int i,int j){
    if(T.data[i]!=-1&&T.data[j]!=-1)
    {
        while(i!=j){
            if(i>j){
                i/=2;
            }
            else{
                j/=2;

            }
        }
        return T.data[i];
    }
    return -1;
}
 
int main(){
    Tree T;
    int ans=  findA(T,5,10);
    printf("%d",ans);
    return 0;
} 