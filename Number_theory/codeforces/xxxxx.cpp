#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll sum1=sum;
        ll cnt1=0,cnt2=0;
        for(ll i=0;i<n;i++){
            if(sum%x!=0){
               // cnt1=i+1;
                break;
            }
            else{
                sum-=a[i];
                cnt1++;
            }
        }
        for(ll i=n-1;i>=0;i--){
            if(sum1%x!=0){
                //cnt2=i;
                break;
            }
            else{
                sum1-=a[i];
                cnt2++;
            }
        }
        //cout<<"cnt1 "<<cnt1<<" "<<"cnt2 "<<cnt2<<endl;
        if((cnt1==n&&cnt2==n)) cout<<-1<<endl;
        else cout<<max(n-cnt2,n-cnt1)<<endl;
    }
}
