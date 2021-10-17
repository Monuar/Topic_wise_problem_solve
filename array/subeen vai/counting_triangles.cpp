#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int k=j+1;
            while(k<n&&arr[i]+arr[j]>arr[k]){
                k++;
            }
            cnt+=(k-j-1);
        }
    }
    cout<<cnt<<endl;
}
