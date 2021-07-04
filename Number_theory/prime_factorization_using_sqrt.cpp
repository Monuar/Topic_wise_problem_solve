#include<bits/stdc++.h>
using namespace std;
#define ll long long
void primefact()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
                    v.push_back(make_pair(i,cnt));
        }

    }
    if(n>1) v.push_back(make_pair(n,1));
    for(int i=0;i<v.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl;
}
int main()
{
    primefact();
}
