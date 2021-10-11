#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    	int l=0,r=n-1;
    	int i=0;
    	long long temp[n];
    	bool flag=1;
        for(int i=0;i<n;i++){
            if(flag==1){
                temp[i]=arr[r];
                r--;
            }
            else {
                temp[i]=arr[l];
                l++;
            }
            flag=!flag;
        }
    	for(int i=0;i<n;i++){
    	    arr[i]=temp[i];
    	    cout<<arr[i]<<" ";
    	}

}
