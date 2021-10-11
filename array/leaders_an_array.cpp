#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int mx=a[n-1];
    vector<int>v;
    v.push_back(mx);
    for(int i=n-2;i>=0;i--){
        if(a[i]>mx){
            mx=a[i];
            v.push_back(mx);
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
