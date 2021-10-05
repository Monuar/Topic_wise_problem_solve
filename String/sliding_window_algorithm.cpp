#include<bits/stdc++.h>
using namespace std;
string T,P;
int LT,LP;
bool match(int L,int R)
{
    for(int i=0;i<LP;i++){
        if(T[L+i]!=P[i]) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;

    cin.ignore();
    while(t--)
    {
        getline(cin,T);
        getline(cin,P);
        LT=T.size();
        LP=P.size();
        for(int L=0,R=LP-1;R<LT;L++,R++)
        {
            if(match(L,R)){
                cout<<L<<" ";
            }
        }
        cout<<endl;
    }
}
