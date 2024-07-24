#include<stdio.h>  
int main()  
{ 
int num, rem, sum = 0, i,t;  
printf("Enter a number\n");  
scanf("%d", &num);    
t=num;  
for(i = 1; i < num; i++)  
{  
rem = num % i;  
if (rem == 0) 
{  
sum = sum + i;  
}  
}  
if (sum == num)  
    printf("%d is a Perfect Number",t);  
else  
    printf("%d is not a Perfect Number",t);  
}
