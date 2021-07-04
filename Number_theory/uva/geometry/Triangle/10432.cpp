#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    double r,n;
    while(scanf("%lf%lf",&r,&n)!=EOF){
        double a=sin((2*PI)/n);
        //cout<<a<<endl;
        double area=(.5)*n*(r*r)*a;
        printf("%.3lf\n",area);
    }
}
