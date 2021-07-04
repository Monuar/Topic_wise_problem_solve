#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    set<int ,greater<int> >s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    cout<<s.size()<<endl;
    set<int>::iterator it,it1;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    //s.clear();
    if(s.empty()) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    it=s.begin();
    it1=s.begin();
    advance(it,2);
    advance(it1,4);
    s.erase(it,it1);
    for(auto it:s) cout<<it<<" ";
    cout<<endl;
    it=s.find(2);//if finding this value return position of this value,
                //otherwise return end of the set
    int c=s.count(4);
    cout<<c<<endl;
    it=s.lower_bound(6);
    cout<<*it<<endl;
}
