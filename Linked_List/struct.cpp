#include<bits/stdc++.h>
using namespace std;
struct MyStruct{
    string name;
    int age;
    double height;
};
int main()
{
    struct MyStruct s1;
    struct MyStruct s2;
    struct MyStruct s3;
    s1.name="monuar";
    s2.age=22;
    s3.height=33.3;
    cout<<s1.name<<endl;
    cout<<s2.age<<endl;
    cout<<s3.height<<endl;
}
