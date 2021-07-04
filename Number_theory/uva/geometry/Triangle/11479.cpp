#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[0]+a[1]<=a[2]){
            cout<<"Case "<<j<<": "<<"Invalid"<<endl;

        }
        else{
            if(a[0]==a[1] and a[1]==a[2]){
                cout<<"Case "<<j<<": "<<"Equilateral"<<endl;
            }
            else if(a[0]!=a[1] and a[1]!=a[2]){
                cout<<"Case "<<j<<": "<<"Scalene"<<endl;
            }
            else cout<<"Case "<<j<<": "<<"Isosceles"<<endl;
        }
        j++;
    }
}
