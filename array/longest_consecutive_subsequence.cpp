#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=0;
    vector<int>v(a,a+n);
    unordered_set<int>s(v.begin(),v.end());
    int res=0;
    for(int x:v){
        if(s.find(x)!=s.end()){
            int prev=x-1;
            int next=x+1;
            while(s.find(prev)!=s.end()) s.erase(prev--);
            while(s.find(next)!=s.end()) s.erase(next++);
            res=max(res,next-prev-1);

        }
    }
    cout<<res<<endl;
}
