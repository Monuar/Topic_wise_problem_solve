#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0;
    vector<int>v;
    while(i<n && j<m){
        if(a[i]<b[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    if(i==n){
        for(;j<m;j++){
            v.push_back(b[j]);
        }
    }
    else{
        for(;i<n;i++){
            v.push_back(a[i]);
        }
    }
    int k;
    cin>>k;
    cout<<v[k-1]<<endl;
}
