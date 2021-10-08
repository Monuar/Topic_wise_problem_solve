#include<bits/stdc++.h>
using namespace std;
vector<int>createTempArray(string p)
{
    vector<int>lps(p.size());
    int index=0;
    for(int i=1;i<p.size();){
        if(p[i]==p[index]){
            lps[i]=index+1;
            i++;
            index++;
        }
        else{
            if(index!=0) index=lps[index-1];
            else lps[i]=index,i++;
        }
    }
    return lps;
}
void kmp(string p,string t)
{
    vector<int>lps=createTempArray(p);
    for(int i=0;i<lps.size();i++){
        cout<<lps[i]<<" ";
    }
    cout<<endl;
    int x=max_element(lps.begin(),lps.end())-lps.begin();
    cout<<lps[x]<<endl;
    int i=0,j=0,cnt=0;
    while(i<t.size()){
        if(t[i]==p[j]){
            i++,j++;
        }
        else{
            if(j!=0) j=lps[j-1];
            else i++;
        }
        //cout<<"j "<<j<<endl;
        if(j==p.size()){
            cnt++;
            j=lps[j-1];
        }
    }
    cout<<cnt<<endl;

}
int main()
{
    string p,t;
    cin>>p>>t;
    kmp(p,t);
}
