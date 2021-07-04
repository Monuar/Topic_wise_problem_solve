#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    multiset<int>ms,ms1;
    multiset<int>::iterator it;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    for(auto it:ms) cout<<it<<" ";
    cout<<endl;
    it =ms.begin();
    advance(it,3);
    ms.erase(it);
    for(auto it:ms) cout<<it<<" ";
    cout<<endl;
    it=ms.find(5);
    if(it==ms.end()) cout<<"not found"<<endl;
    else cout<<"found"<<endl;
    cout<<ms.count(20)<<endl;
    it=ms.lower_bound(2);
    cout<<*it<<endl;
    ms1=ms;
    cout<<endl;
    for(auto it1:ms1) cout<<it1<<" ";
    cout<<endl;

}
