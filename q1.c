#include <stdio.h>
int area(int l, int b)
{
    int ar=0;
    ar=l*b;
    return ar;
}
int main()
{
    int a,b,ans;
    printf("Enter length and width for area of a triangle ");
    scanf("%d",&a);
    scanf("%d",&b);

    ans= area(a,b);
    printf("The area is %d ",ans);
}