#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ind=n-1;
    while(ind>=0){
        if(a[ind]==9){
            a[ind]=0;
        }
        else{
            a[ind]+=1;
            break;
        }
        ind--;
    }
    if(ind<0) {
        a[n]=1;
        reverse(a,a+n+1);
        for(int i=0;i<=n;i++) cout<<a[i]<<" ";
    }
    else{
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }



}
