#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll dp[1000001];
ll inv[1000001];
ll power(ll a , ll n)
{
	ll result = 1;

	while(n)
	{
		if(n & 1) result = (result * a) % mod;

		n >>= 1;
		a = (a * a) % mod;
	}

	return result;
}
void init(string s)
{
    ll p=31;
    ll p_power=1;
    inv[0]=1;
    dp[0]=(s[0]-'a'+1)%mod;
    for(int i=1;i<s.size();i++){
        p_power=(p*p_power)%mod;
        inv[i]=power(p_power,mod-2);
        dp[i]=(dp[i-1]+(s[i]-'a'+1)*p_power)%mod;
    }


}
ll gethash(string s)
{
    ll value=0;
    ll p=31;
    ll p_power=1;
    for(int i=0;i<s.size();i++)
    {
        value=(value+(s[i]-'a'+1)*p_power)%mod;
        p_power=(p*p_power)%mod;
    }
    return value;
}
ll substringhash(ll l,ll r)
{
    ll result=dp[r];
    if(l>0) result=(result-dp[l-1]+mod)%mod;
    result=(result*inv[l])%mod;
    return result;
}
int main()
{
    string haystack,needle;
    int n,l,r,ans;
    bool flag=false;
    while(cin>>n)
    {
        cin>>needle;
        cin>>haystack;
        ll needlehash=gethash(needle);
        init(haystack);
        for(l=0,r=needle.size()-1;r<haystack.size();l++,r++){
            if(needlehash==substringhash(l,r)){
                cout<<l<<endl;
            }
        }
        cout<<endl;
    }
}
