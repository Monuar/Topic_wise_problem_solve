#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
    for(int i=n-1;i>=0;i--){
        int x=a[i];
        int l=0;
        int r=i-1;
        while(l<r){
            int sum=a[l]+a[r];
            if(sum==x){
                cout<<a[l]<<" "<<a[r]<<" "<<x<<endl;
                return;
            }
            if(sum>x) r--;
            else l++;
        }
    }
    cout<<"No such Triplets exist"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    solve(a,n);
}
