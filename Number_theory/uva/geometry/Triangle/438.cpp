#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        double a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        double b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        double c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        double r=(a*b*c)/sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
        printf("%.2lf\n",2*r*3.141592653589793);
    }
}
