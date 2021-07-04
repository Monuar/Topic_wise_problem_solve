#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
        if(a+b<=c||a+c<=b||b+c<=a){

            printf("%.3lf\n",-1/1.0);
        }
        else{
            double s=(a+b+c)/2.0;
            double area=(sqrt(s*(s-a)*(s-b)*(s-c)));
            printf("%.3lf\n",(4/3.0)*area);
        }
    }
}
