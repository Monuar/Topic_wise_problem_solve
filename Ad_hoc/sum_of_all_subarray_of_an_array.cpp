#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n)
{
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(i*(n-i+1))*a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    cout<<solve(a,n)<<endl;
}
