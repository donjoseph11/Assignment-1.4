#include<stdio.h>
void main()
{
    int a=0,b=0,equel=0;
    int hcf(int ,int );
    printf("Enter the width of 1st strap in cm: ");
    scanf("%d",&a);
    printf("Enter the width of 2nd strap in cm: ");
    scanf("%d",&b);
    equel=hcf(a,b);
    printf("The equal width at which both strips should cut is: %d cm",equel);
}

int hcf(int z,int y)
{
    int hcf=0;
    for(int i=1;i<=y||i<=z;i++)
        {
            if(y%i==0&&z%i==0)
            hcf=i;
        } 
    return hcf;
}