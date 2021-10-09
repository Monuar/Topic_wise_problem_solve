#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    cin>>n;
    int a[n];
     unordered_map<int,bool>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=true;
    }
    for(int i=0;i<n;i++){
        if(mp.find(a[i]-1)!=mp.end()){
            mp[a[i]]=false;
        }
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]==true){
            int t=1;
            while(mp.find(a[i]+t)!=mp.end()){
                t++;
                cout<<"a "<<a[i]+t<<" ";
            }
        }
    }


}
