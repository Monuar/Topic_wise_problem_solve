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
    int leftsum=0,rightsum=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    rightsum=sum;
    int ans=-1;
    for(int i=0;i<n;i++){
        rightsum=rightsum-a[i];
        if(rightsum==leftsum){
            ans=a[i];
            break;
        }
        leftsum+=a[i];
    }
    cout<<ans<<endl;
}
