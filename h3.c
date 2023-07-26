#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int flag=0,stdcode;
char s1[100],cname[39];
FILE *fp1;
fp1=fopen("std.txt","r");
if(fp1==NULL)
{
printf("file not found ");
exit(0);
}
printf("enter city to search ");
scanf("%s",cname);
while(!feof(fp1))
{
fscanf(fp1,"%s%d",s1,&stdcode);
if(strcmp(s1,cname)==0)
{
flag=1;
break;

}
}
if(flag==1)
printf("city is found \n std code=%d ",stdcode);
else
printf("city not found");
}
