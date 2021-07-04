#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    if(s.empty()) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    //cout<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
