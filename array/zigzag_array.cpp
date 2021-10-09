#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=1;
    for(int i=1;i<n;i++){
        if(flag){
            if(a[i-1]>a[i]){
                swap(a[i-1],a[i]);
            }
        }
        else{
            if(a[i-1]<a[i]){
                swap(a[i-1],a[i]);
            }
        }
        flag=!flag;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
