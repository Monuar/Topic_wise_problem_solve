#include<bits/stdc++.h>
using namespace std;
int* getvalue()
{
    int x;
    x=20;
    return &x;
}
int main()
{
   int* px=getvalue();
   cout<<*px<<endl;
}
