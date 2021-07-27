#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    //sort(a,a+n);
    //reverse(a,a+n);
    int j=0;
    int sum1=0,sum2=0;
    int l=0,r=n-1;
    while(j<n){
        if(j%2==0){
            if(a[l]<a[r]){
                sum1+=a[r];
                r--;
            }
            else{
                sum1+=a[l];
                l++;
            }
        }
        else{
            if(a[l]<a[r]){
                sum2+=a[r];
                r--;
            }
            else{
                sum2+=a[l];
                l++;
            }
        }
        j++;
    }
    cout<<sum1<<" "<<sum2<<endl;
}
