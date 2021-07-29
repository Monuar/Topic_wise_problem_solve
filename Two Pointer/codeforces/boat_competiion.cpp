#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        for(int i=2; i<=2*a[n-1]; i++)
        {
            int l=0,r=n-1;
            int cnt=0;
            while(l<r){
                int sum=a[l]+a[r];
                if(sum==i){
                    cnt++;
                    l++;
                    r--;
                }
                if(sum>i) r--;
                else if(sum<i) l++;
            }
            mx=max(mx,cnt);
        }
        cout<<mx<<endl;
    }
}
