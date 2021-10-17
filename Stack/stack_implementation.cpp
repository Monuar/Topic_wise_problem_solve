#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 3
int STACK[CAPACITY];
int top=-1;
void push(int x)
{
    if(top<CAPACITY-1){
        top++;
        STACK[top]=x;
        cout<<"Succesfully added item "<<x<<endl;
    }
    else{
        cout<<"Exception! no space"<<endl;
    }
}
int pop()
{
    if(top>=0){
        int val=STACK[top];
        top--;
        return val;
    }
    return -1;
}
int peek()
{
    if(top>=0){
        return STACK[top];
    }
    cout<<"Exception from empty stack"<<endl;
    return -1;
}
int main()
{
    peek();
    push(10);
    push(20);
    push(30);
    cout<<"pop item "<<pop()<<endl;
    push(40);
    push(50);
    cout<<"Top of stack "<<peek()<<endl;
    cout<<"Top of stack "<<peek()<<endl;
   // cout<<
    return 0;
}
