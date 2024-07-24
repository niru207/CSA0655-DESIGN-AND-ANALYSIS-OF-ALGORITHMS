#include<stdio.h>
int main()
{
int n, a, bi_nom,limit;
printf("Enter the limit:");
scanf("%d",&limit);
for (n=0; n<=limit; ++n)
printf("%d   ", n);
n=0;
printf("\n");
do
{
a = 0, bi_nom = 1; 
printf("\n");
printf("%d", n);
while(a<=n)
{
if(n==0 || a==0)
printf("%4d", bi_nom);
else
{
bi_nom=bi_nom* (n-a+1)/a;
printf("%4d", bi_nom);
}
a=a+1;
}
printf("\n");
n=n+1;
}
while(n<=limit);
}
