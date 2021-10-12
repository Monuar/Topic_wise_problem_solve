#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>pos,neg;
    for(int i=0;i<n;i++){
        if(a[i]<0) neg.push_back(a[i]);
        else pos.push_back(a[i]);
    }
    int i=0,j=0,k=0;
    while(i<pos.size()&&j<neg.size()){
        a[k++]=pos[i++];
        a[k++]=neg[j++];
    }
    while(i<pos.size()) a[k++]=pos[i++];
    while(j<neg.size()) a[k++]=neg[j++];
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
