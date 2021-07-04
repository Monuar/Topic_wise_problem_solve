#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        unsigned long long a[4];
        //set<unsigned long long>s;
        for(int i=0;i<4;i++){
            cin>>a[i];
            //s.insert(a[i]);
        }
        sort(a,a+4);
        if(a[0]==a[3]) cout<<"square"<<endl;
        else if(a[0]==a[1]&&a[2]==a[3]) cout<<"rectangle"<<endl;
        else if((a[0]+a[1]+a[2])>=a[3]) cout<<"quadrangle"<<endl;
        else cout<<"banana"<<endl;
    }
}
