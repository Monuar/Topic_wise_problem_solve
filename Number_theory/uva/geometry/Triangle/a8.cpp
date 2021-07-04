#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--){
        int a,b,c,d;
        int e,f,g,h;
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        scanf("%d:%d %d:%d",&e,&f,&g,&h);
        int h1=a*60+b;
        int h2=c*60+d;
        int h3=e*60+f;
        int h4=g*60+h;
        if(h3>h2||h4<h1){
            cout<<"Case "<<i<<": "<<"Hits Meeting"<<endl;
        }
        else cout<<"Case "<<i<<": "<<"Mrs Meeting"<<endl;
        i++;

    }
}
