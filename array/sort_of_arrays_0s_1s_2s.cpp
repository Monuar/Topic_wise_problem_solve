#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,m=0,r=n-1;
    while(m<=r)
    {
        if(a[m]==0){
            swap(a[l],a[m]);
            m++;
            l++;
        }
        else if(a[m]==1) m++;
        else if(a[m]==2){
            swap(a[m],a[r]);
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
