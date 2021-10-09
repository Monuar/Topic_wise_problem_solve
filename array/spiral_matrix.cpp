#include<bits/stdc++.h>
using namespace std;
void spiral_matrix(int n,int m,a[][m])
{
    int l=0,k=0,last_row=n-1,last_col=m-1;
    while(l<=last_row&&k<=last_col)
    {
        for(int i=l;i<=last_col;i++){
            cout<<a[k][i]<<" ";
        }
        k++;
        for(int i=k;i<=last_row;i++){
            cout<<a[k][last_col]<<" ";
        }
        last_col--;
        if(k<=last_row){
            for(int i=last_col;i>=l;i--){
                cout<<a[k][i]<<" ";
            }
            last_row--;
        }
        if(l<=last_col){
            for(int i=last_row;i>=k;i--){
                cout<<a[i][l]<<" ";
            }
            l++;
        }
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    spiral_matrix(n,m,a);
}
