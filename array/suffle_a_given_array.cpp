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
    for(int i=n-1;i>0;i--){
        int j=rand()%(i+1);
        swap(a[i],a[j]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
