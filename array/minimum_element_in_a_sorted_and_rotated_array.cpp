#include<bits/stdc++.h>
using namespace std;
int Binary_search(int a[],int n)
{
    int l=0,r=n-1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(mid<r&&a[mid+1]<a[mid]){
            return mid+1;
            break;
        }
        if(l<mid&&a[mid-1]>a[mid]){
            return mid;
            break;
        }
        if(a[mid]<a[r]) r=mid-1;
        else l=mid+1;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ind=Binary_search(a,n);
   // cout<<"ind "<<ind<<endl;
    cout<<a[ind]<<endl;
}
