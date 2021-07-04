#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
        double s=(a+b+c)/2.0;

        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        if(a==0||b==0||c==0) printf("The radius of the round table is:% .3lf\n",0);
        else printf("The radius of the round table is:% .3lf\n",area/s);
    }
}
