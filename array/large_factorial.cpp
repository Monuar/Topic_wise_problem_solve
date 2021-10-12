#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll arr[1000000];
void precompute_fact()
{
    arr[0]=1;
    ll fact=1;
    for(int i=1;i<1000000;i++){
        fact=((fact%mod)*(i%mod))%mod;
        arr[i]=fact;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    precompute_fact();
    vector<ll>ans;
    for(int i=0;i<n;i++){
        ans.push_back(arr[a[i]]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
