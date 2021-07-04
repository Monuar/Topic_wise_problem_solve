#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int cnt=0,k=0;
    for(int i=0;i<s.size();i++){
        for(int j=k;j<t.size();j++){
            cout<<"k "<<j<<endl;
            if(s[i]==t[j]){
                cnt++;
                k=j+1;
                cout<<"klalkajjgf"<<endl;
                break;
            }
        }
       // if(k==t.size()-1) break;
        cout<<"k "<<k<<endl;
    }
    if(cnt==s.size()) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
