#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
ll getHash(string key)
{
    ll value=0;
    ll p=31;
    ll p_power=1;
    for(char ch=0;ch<key.size();ch++)
    {
        value=(value+(key[ch]-'a'+1)*p_power)%m;
        p_power=(p*p_power)%m;
    }
    return value;
}
int main()
{
    int flag=1;
    while(flag)
    {
        string key;
        cin>>key;
        if(key==".") flag=false;
        else{
            cout<<"Key : "<<key<<" Hash : "<<getHash(key)<<endl;
        }
    }
}
