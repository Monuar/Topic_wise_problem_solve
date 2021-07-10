#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,sum;
    int b=1;
    int i=2;
    int n=5;
    cout<<a<<" "<<b<<" ";
    while(i<=n){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        i++;
    }

}
