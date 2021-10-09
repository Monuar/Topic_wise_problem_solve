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
    int currentsum=0,maxsum=a[0];
    int Start=0,End=0,S=0;
    for(int i=0;i<n;i++){
        currentsum+=a[i];
        if(currentsum>maxsum){
            maxsum=currentsum;
            Start=S,End=i;
        }
        if(currentsum<0){
            currentsum=0;
            S=i+1;
        }
    }
    cout<<maxsum<<endl;
    cout<<Start<<" "<<End<<endl;
}
