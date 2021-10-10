#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int start=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[start];
        while(sum>s){
            sum-=a[start];
            start++;
        }
        if(sum==s){
            cout<<start+1<<" "<<i+1<<endl;
            break;
        }
    }
}
