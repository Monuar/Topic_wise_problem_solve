#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>l(n),r(n);
    l[0]=1;
    r[n-1]=1;
    for(int i=1;i<n;i++){
        l[i]=l[i-1]*a[i-1];
    }
    for(int i=0;i<n;i++) cout<<l[i]<<" ";
    for(int i=n-2;i>=0;i--){
        r[i]=r[i+1]*a[i+1];
    }
    cout<<endl;
    for(int i=0;i<n;i++) cout<<r[i]<<" ";
}
