#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>s;
void printdivisors(ll n)
{
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i) s.insert(i);
            else s.insert(i),s.insert(n/i);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll ans=a[0]*a[n-1];
        printdivisors(ans);
        if(s.size()==n+2){
            vector<ll>v;
            v.assign(s.begin(),s.end());
            v.erase(v.begin());
            v.pop_back();
            int cnt=0;
            for(int i=0;i<n;i++){
                if(a[i]!=v[i]){
                    cnt=1;
                    break;
                }
            }
            if(cnt==1) cout<<"-1"<<endl;
            else cout<<ans<<endl;
        }
        else cout<<"-1"<<endl;
        s.clear();
    }
}
