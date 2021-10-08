#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll inv[100001];
ll dp[100001];
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
void init(string input_string)
{
    ll p=31;
    ll p_power=1;
    inv[0]=1;
    dp[0]=(input_string[0]-'a'+1);
    for(int i=1;i<input_string.size();i++)
    {
        char ch=input_string[i];
        p_power=(p_power*p)%mod;
        inv[i]=power(p_power,mod-2);

        dp[i]=(dp[i-1]+(ch-'a'+1)*p_power)%mod;
    }

}
ll substringhash(ll l,ll r)
{
    ll result=dp[r];
    if(l>0) result-=dp[l-1];
    result=(result*inv[l])%mod;
    return result;
}
int main()
{
    string input_string;
    int tc,l,r;
    cin>>input_string;
    init(input_string);
    cin>>tc;
    while(tc--){
        cin>>l>>r;
        cout<<substringhash(l,r)<<endl;
    }
}
