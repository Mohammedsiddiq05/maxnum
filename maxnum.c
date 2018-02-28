#include<stdio.h>
int main()
{
int a,b,c;
printf("\nenter the value:");
scanf("%d",&a);
printf("\nenter the value:");
scanf("%d",&b);
printf("\nenter the value:");
scanf("%d",&c);
if(a>b&&a>c)
printf("\n the largest value is:a(%d)",a);
else if(b>c&&b>a)
printf("\n the largest value is:b(%d)",b);
else if(c>b&&c>a)
printf("\n the largest value is:c(%d)",c);
else
printf("\nnothing larger");
return 0;
}
