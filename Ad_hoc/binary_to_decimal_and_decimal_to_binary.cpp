#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int n)
{
    string s="";
    while(n){
        int a=n%2;
        s+=(to_string(a));
        n/=2;
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string res;
        if(n&1) cout<<n<<endl;
        else{
            string s=decimal_to_binary(n);
            bitset<64>a(s);
            int ab = a. to_ulong();
            cout<<ab<<endl;
        }
    }
}

