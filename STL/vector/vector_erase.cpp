#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=5;i>=1;i--){
        v.push_back(i);
    }
    //v.erase(v.begin()+2,v.begin()+5);
    sort(v.begin()+2,v.begin()+5);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    vector<vector<int>>v1;
    for(int i=0;i<3;i++){
        vector<int>row;
        for(int j=0;j<4;j++){

            row.push_back(i*j);
        }
        v1.push_back(row);
        //cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}

