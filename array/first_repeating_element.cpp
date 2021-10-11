#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    set<int>s;
    int m;
    for(int i=n-1;i>=0;i--){
        if(s.find(a[i])!=s.end()){
            m=a[i];
        }
        else{
            s.insert(a[i]);
        }
    }
    cout<<m<<endl;
}
