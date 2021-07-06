#include<bits/stdc++.h>
#define ll long long
using namespace std;
void power(ll b,ll p,ll m)
{

    ll result=1,x=1;
    while(p)
    {
        if(p%2==1)
        {
            result=(result*b);


            // cout<<"result "<<result<<endl;
            p--;
        }
        else
        {
            b=(b*b);
            //cout<<"b "<<b<<endl;
            p/=2;
            x*=b;
            //cout<<"x "<<x<<endl;
            //cout<<"p "<<p<<endl;
            if(x>m&&p!=1){
                cout<<m<<endl;
                return ;
            }
        }
        //result*=b;
        //cout<<"result "<<result<<endl;
        //cout<<"x "<<x<<endl;
        //cout<<"b "<<b<<endl;
        //cout<<"result "<<result<<endl;
        if(result>m)
        {
            cout<<m%result<<endl;
            return ;
        }

    }
    cout<<m%result<<endl;

}
int main()
{
    ll n,m;
    cin>>n>>m;
    power(2,n,m);
}


