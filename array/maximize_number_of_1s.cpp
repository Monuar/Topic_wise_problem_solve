#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int maxconsecutiveone=0;
    int countzeros=0;
    int start=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            countzeros++;
        }
        while(countzeros>0){
            if(a[start]==0){
                countzeros--;
            }
            start++;
        }
        maxconsecutiveone=max(maxconsecutiveone,i-start+1);
    }
    cout<<maxconsecutiveone<<endl;
}
