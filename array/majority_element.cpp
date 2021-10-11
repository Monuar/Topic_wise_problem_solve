#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
    int count=0,candidate=0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=a[i];
            count=1;
        }
        else{
            if(candidate==a[i]) count++;
            else count--;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==candidate) cnt++;
    }
    if(cnt>n/2) cout<<candidate<<endl;
    else cout<<-1<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    solve(a,n);
}

