#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    map<int,int>mp,mp1;
    mp.insert({1,10});
    mp.insert({1,10});
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp1.insert({5,50});
    mp1.insert({6,60});
    mp1.insert({7,70});
    mp1.insert({8,80});
    //mp[5]=50;
   // mp1=mp;
    //mp1.swap(mp);
    auto it=mp.lower_bound(2);
    cout<<(*it).first<<" "<<(*it).second<<endl;
    int it1=mp.count(1);
    cout<<(it1)<<endl;
    for(auto it:mp1){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
