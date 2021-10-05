#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int lps[n][n];
    for(int i=0;i<n;i++){
        lps[i][i]=1;
    }
    for(int cl=2;cl<=n;cl++){
        for(int i=0;i<n-cl+1;i++){
            int j=i+cl-1;
            if(s[i]==s[j]){
                lps[i][j]=lps[i+1][j-1]+2;
            }
            else{
                lps[i][j]=max(lps[i][j-1],lps[i+1][j]);
            }
        }
    }
    cout<<lps[0][n-1]<<endl;
}
