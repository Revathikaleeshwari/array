#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j,a[50];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
scanf("%d",&a[i]);
if(a[i]+a[j]==0)
{
printf("%d%d",i,j);
}
}
return 0;
}
