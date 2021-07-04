#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    //cout<<fixed<<setprecision(4);
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        double s=(a+b+c)/2.0;
        double ar=sqrt(s*(s-a)*(s-b)*(s-c));

        double r1=ar/s;
        double area1=(PI)*(r1*r1);
        //cout<<"PI "<<PI<<endl;

        double area2=ar-area1;
        double r=(a*b*c)/sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
        double area3=((PI)*(r)*(r))-(area1+area2);
        printf("%.4lf %.4lf %.4lf\n",area3,area2,area1);
    }



}
