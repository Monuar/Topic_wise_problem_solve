#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    multimap<int,int>mp,mp1;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp.insert({5,50});
    mp.insert({5,50});
    mp.insert({5,50});
    mp1.insert({6,60});
    mp1.insert({7,70});
    mp1.insert({8,80});
    //int sz=mp.size();
    //cout<<sz<<endl;
    //auto it=mp.begin();
    //advance(it,2);
   // mp.erase(it);//delete all same key
   // int c=mp.count(5);//return how many times key are presents in the multimap
    //cout<<c<<endl;
    //auto it=mp.find(100);
    //if(it!=mp.end()) cout<<"found"<<endl;
    //else cout<<"Not found"<<endl;
    //auto it=mp.lower_bound(10);
    //cout<<(*it).first<<" "<<(*it).second<<endl;
    //mp1=mp;
    mp.swap(mp1);
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
