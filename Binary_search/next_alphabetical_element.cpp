#include<bits/stdc++.h>
using namespace std;
char solve(string s,char c,int n)
{
    int l=0;
    int r=n-1;
    char ans;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(s[mid]>c){
            ans=s[mid];
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    char ans=solve(s,ch,s.size());
    cout<<ans<<endl;
}
