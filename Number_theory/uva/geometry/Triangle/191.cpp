#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int e,f,g,h;
        cin>>e>>f>>g>>h;
        int m1=max(a,c);
        int m2=max(b,d);
        double x=(a+b)/2.0;
        double y=(c+d)/2.0;
        if((m1>=x&&h>=m2)&&(m1<x&&m2<y)) cout<<"T"<<endl;
        else cout<<"F"<<endl;
    }
}
