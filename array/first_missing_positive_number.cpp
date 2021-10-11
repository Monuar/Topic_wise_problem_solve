#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        while(a[i]<=n&&a[a[i]-1]!=a[i]){
            swap(a[a[i]-1],a[i]);
        }
    }
    bool flag=1;
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
                flag=0;
            cout<<i+1<<endl;
            break;
        }
    }
    if(flag==1) cout<<n<<endl;

}

