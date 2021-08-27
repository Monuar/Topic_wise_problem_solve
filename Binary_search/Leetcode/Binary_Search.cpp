#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int bs(vector<ll>& v, ll t) {
        int l=0,r=v.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]==t) return mid;
            else if(v[mid]>t){
                r=mid-1;
            }
            else l=mid+1;
        }
        return -1;
    }

};
int main()
{
    ll n;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    vector<ll>v;
    v.assign(a,a+n);
    ll x;
    cin>>x;
    Solution cls;
    ll ans=cls.bs(v,x);
    cout<<ans<<endl;
}
