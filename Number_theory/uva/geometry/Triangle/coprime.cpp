#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,m,d=0;
        cin>>a>>b>>m;
        for(long long i=1;i<=a+m;i++){
            long long c=__gcd(a+i,b+i);
            if(c!=1){
                d=a+i;
                break;
            }
        }
        if(a%2!=0||b%2!=0){
            cout<<(a+m)/d<<endl;
            cout<<m+1-(a+m)/d<<endl;
        }
    }
}
