#include<stdio.h>
int main()
{
int n,rev=0,r,temp;
scanf("%d",&n);
temp=n;
while(n>0)
{
	r=n%10;
	rev=(rev*10)+r;
	n=n/10;
}
if(temp==rev)
printf("yes")
else
printf("no")
return 0;
}
