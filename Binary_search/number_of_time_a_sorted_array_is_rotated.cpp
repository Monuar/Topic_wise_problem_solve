#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0,r=a.size()-1;
        int cnt=0;
        while(l<=r)
             {
                int mid=l+(r-l)/2;
                if(mid<r){
                    if(a[mid+1]<a[mid]){
                    cnt=mid+1;
                    break;
                    }
                }
                 if(l<mid){
                     if(a[mid-1]>a[mid]){
                    cnt=mid;
                    break;
                     }
                    }
             if(a[mid]<a[r]) r=mid-1;
                else l=mid+1;

          }
         return a[cnt];
        }

};
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    Solution sln;
    vector<int> vec;
    vec.assign(a, a+n);
    int res=sln.findMin(vec);
    cout<<(res);
}
