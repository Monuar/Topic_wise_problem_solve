#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n,int x){
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x){
            left=mid+1;
        }
        else right=mid-1;
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b=binary_search(a,n,x);
    cout<<b<<endl;
}
