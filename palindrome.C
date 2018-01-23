#include<stdio.h>
int main()
{
int n,num,rem,reverse=0;
printf("enter the 
num=n;num:,n);
scanf("%d",&n);
while(n!=0)
{
rem=num%10;
n=n/10;
reverse=reverse*10+rem;
}
if(num==reverse
printf("%d yes",num);
else
printf("%d no",num);
return 0;
}
