#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    bool flag=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
           }
           else{
            if(st.empty()){
                flag=0;
                break;
            }
            if(s[i]==')'&&st.top()=='(') st.pop();
            else if(s[i]=='}' and st.top()=='{') st.pop();
            else if(s[i]==']'&&st.top()=='[') st.pop();
            else{
                flag=0;
                break;
            }
           }
    }
    if(st.empty()&&flag==1) cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
}
