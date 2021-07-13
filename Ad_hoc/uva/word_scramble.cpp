#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        stringstream ss(s);
        int j=0;
        string s1;
        vector<string>v;
        while(ss>>s1){
            v.push_back(s1);
            ++j;
        }
        for(int i=0;i<j;i++){
            reverse(v[i].begin(),v[i].end());
            cout<<v[i]<<" ";
        }

        cout<<endl;
        //v.clear();
    }
}
