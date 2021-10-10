#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int temp[n];
    memcpy(temp,a,n*sizeof(int));
    map<int,int>umap;
    sort(temp,temp+n);
    for(int i=0;i<n;i++){
        umap[temp[i]]=i;
    }
    for(int i=0;i<n;i++){
        a[i]=umap[a[i]];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
