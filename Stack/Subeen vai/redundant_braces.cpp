int Solution::braces(string s) {
    stack<char>st;
    bool flag=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'|| s[i]=='-'||s[i]=='/'||s[i]=='*') st.push(s[i]);
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            if(st.top()=='(') flag=true;
            while(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
                st.pop();
            }
            st.pop();

        }
    }
    return flag;
}
