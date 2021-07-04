#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int mx=max_element(v.begin(),v.end())-v.begin();
    cout<<"mx "<<mx<<endl;
    int a=v[mx];
    cout<<"a "<<a<<endl;
    int l=0,h=v.size()-1;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        cout<<"mid "<<mid<<endl;
        cout<<"v[mid] "<<v[mid]<<endl;
        if(v[mid]==a){
            ans=mid;
            break;
        }
        if(v[mid]<a) l=mid+1;
        else h=mid-1;
        cout<<"monuar"<<endl;
    }
    cout<<ans<<endl;

}
