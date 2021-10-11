#include<bits/stdc++.h>
using namespace std;
void reverseArray(int a[],int l,int r)
{
    while(l<r){
        swap(a[l],a[r]);
        l++;
        r--;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    k=k%n;
    if(k==0) return 0;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    reverseArray(a,0,k-1);
    reverseArray(a,k,n-1);
    reverseArray(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
