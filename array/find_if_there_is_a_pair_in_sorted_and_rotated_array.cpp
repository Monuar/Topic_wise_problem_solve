#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l,r,i;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            break;
        }
    }
    l=(i+1)%n;
    r=i;
    while(l!=r)
    {
        if(a[l]+a[r]==x){
            cout<<"found"<<endl;
            break;
        }
        else if(a[l]+a[r]<x){
            l=(l+1)%n;
        }
        else{
            r=(n+r-1)%n;
        }
    }
}
