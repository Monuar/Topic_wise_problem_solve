#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    //int pre[n];
    //pre[0]=ar[0];
   /* for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+ar[i];
    }*/
    int q;
    cin>>q;
    while(q--){
        int l,r,sum=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            sum+=ar[i];
        }
        cout<<sum<<endl;
        /*if(l==0) cout<<pre[r]<<endl;
        else cout<<pre[r]-pre[l-1]<<endl;*/
    }
}
