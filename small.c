
#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter your number");
scanf("%d",&a);
printf("Enter your number");
scanf("%d",&b);
printf("Enter your number");
scanf("%d",&c);
printf("Enter your number");
scanf("%d",&d);
if (a<b&&a<c&&a<d)
{
printf("smallest number is %d",a);
}
else if (b<a&&b<c&&b<d)
{
printf("smallest number is %d",b);
}
else if (c<a&&c<b&&c<d)
{
printf("smallest number is %c",c);
}
else if (d<a&&d<c&&d<b)
{
printf("smallest number is %d",d);
}
else
{
printf("check your number");
}  
