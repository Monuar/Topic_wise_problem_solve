#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    int curr=1,len=1;
    if(n==0)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[i-1])
            {
                if(a[i]==a[i-1]+1) curr++;
                else
                {
                    len=max(len,curr);
                    curr=1;
                }
            }
        }
        cout<<max(len,curr)<<endl;
    }

}
