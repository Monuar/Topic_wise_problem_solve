#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum1=0,sum2=0;
    int i;
    for(i=0;i<n/2;i++){
        sum1+=a[i];
    }
    for(;i<n;i++){
        sum2+=a[i];
    }
    cout<<abs(sum1-sum2)<<endl;
}
