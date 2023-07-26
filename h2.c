#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,x,flag=0;
FILE *fp1;
fp1=fopen("number1.txt","r");
if(fp1==NULL)
{
printf("file not found");
exit(0);
}
printf("enter no to seach");
scanf("%d",&x);
while(!feof(fp1))
{
fscanf(fp1,"%d",&num);
if(num==x)
{
flag=1;
break;
}
}

if(flag==1)
printf("number  founnd");
else
printf("number not found");
fclose(fp1);
}
