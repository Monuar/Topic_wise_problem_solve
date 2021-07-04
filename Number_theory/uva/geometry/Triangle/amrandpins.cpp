#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    if(x1==x2&&y1==y2) cout<<0<<endl;
    else{

        cout<<ceil(hypot(x2-x1,y2-y1)/(2*r))<<endl;
    }
}
