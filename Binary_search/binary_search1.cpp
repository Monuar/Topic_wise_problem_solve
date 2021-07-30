#include<bits/stdc++.h>
using namespace std;
void bs(int a[],int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x) {
            cout<<"Found"<<endl;
            cout<<"The index of x is: "<<mid<<endl;
            return ;
        }
        else if(a[mid]>x) r=mid-1;
        else l=mid+1;
    }
    cout<<"x is not found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int x;
    cin>>x;
    bs(a,n,x);
}
