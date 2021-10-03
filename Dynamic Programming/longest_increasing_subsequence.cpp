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
    vector<int>v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(v.back()<a[i]){
            v.push_back(a[i]);
        }
        else{
            int ind=lower_bound(v.begin(),v.end(),a[i])-v.begin();
            cout<<"ind "<<ind<<endl;
            v[ind]=a[i];
            cout<<"v[ind] "<<v[ind]<<endl;
        }
    }

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
