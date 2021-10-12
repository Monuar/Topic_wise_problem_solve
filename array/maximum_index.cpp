#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        while(a[i]>a[j]) j--;
        ans=max(ans,j-i);
        j=n-1;
    }
    cout<<ans<<endl;
}
