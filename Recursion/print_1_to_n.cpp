#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==0){

        return 0;
    }
    cout<<n<<" ";
    solve(n-1);
   // cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    solve(n);
}
