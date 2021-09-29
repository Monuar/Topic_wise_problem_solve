#include<bits/stdc++.h>
using namespace std;
void fact(int n)
{
    if(n==0) return ;
    --n;
    cout<<n<<endl;
    fact(n);
    cout<<n<<endl;
}
int main()
{
    fact(3);
    cout<<NULL<<endl;
    cout<<nullptr<<endl;
}
