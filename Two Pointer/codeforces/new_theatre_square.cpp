#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        string s;
        ll cnt1=0,cnt2=0;
        while(n--)
        {
            string s;
            cin>>s;

            for(int i=0; i<m; i++)
            {
                if(s[i]==s[i+1]&&s[i]=='.'&&s[i+1]=='.')
                {
                    i++;
                    cnt2++;
                  //  cout<<"monuar1"<<endl;
                }
                else if(s[i]=='.') {
                    cnt1++;
                    //cout<<"monuar"<<endl;
                }

            }
        }
       // cout<<"cnt1 "<<cnt1<<" "<<"cnt2 "<<cnt2<<endl;
        ll ans1=cnt1*x;
        ll ans2=cnt2*y;
        cout<<ans1+min(ans2,2*cnt2*x)<<endl;
    }
}
