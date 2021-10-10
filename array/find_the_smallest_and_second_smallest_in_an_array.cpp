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
    int smallest=INT_MAX,second_smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            second_smallest=smallest;
            smallest=a[i];
        }
        else if(a[i]<second_smallest){
            second_smallest=a[i];
        }
    }
    cout<<smallest<<" "<<second_smallest<<endl;
}
