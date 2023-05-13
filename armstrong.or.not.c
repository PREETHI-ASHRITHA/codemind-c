#include<stdio.h> 
#include<math.h> 
int main() 
{ 
int temp,count=0,num,res=0,rem,c;
scanf("%d",&num); 
temp=num; 
while(temp) 
{ 
temp=temp/10; 
count++; 
} 
temp=num; 
while(temp) 
{ 
rem=temp%10; 
temp=temp/10; 
res=res+pow(rem,c); 
} 
if(num==res)
printf("ArmStrong Number"); 
else 
printf("Not an ArmStrong Number");
}
