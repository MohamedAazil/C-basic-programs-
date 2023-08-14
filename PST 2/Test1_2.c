//Program to Calcuate the Total Marks and Average Marks//
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float sub,avg;
    scanf("%f",&sub);
    scanf("%d",&m1);
    scanf("%d",&m2);
    scanf("%d",&m3);
    scanf("%d",&m4);
    scanf("%d",&m5);
    
    total = m1+m2+m3+m4+m5;
    avg = total/sub;
    
    printf("%d\n",total);
    printf("%0.2f",avg);
}