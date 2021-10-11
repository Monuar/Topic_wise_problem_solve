#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,bool>umap;
    int sum=0,flag=1;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0||umap[sum]==true) {
            flag=0;
            cout<<"found"<<endl;
            break;
        }
        umap[sum]=true;
    }
    if(flag==1) cout<<"not found"<<endl;
}
