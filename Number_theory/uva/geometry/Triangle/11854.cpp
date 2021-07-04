#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        //cin>>a>>b>>c;
        if(a[0]==0&&a[1]==0&&a[2]==0) break;
        else{
            if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) cout<<"right"<<endl;
            else cout<<"wrong"<<endl;
        }
    }
}
