#include<stdio.h>
#include<string.h>
int str_cat(char *,char *);
int main()
{
char str1[10]="Hi";
char str2[10]="kalyani";
str_cat(str1,str2);
}
int str_cat(char *src1,char *src2)
{
int l1,l2,i,j;
l1=strlen(src1);
l2=strlen(src2);
for(i=l1,j=0;src2[j]!='\0';i++,j++)
{
src1[i]=src2[j];
}
src1[i]='\0';
printf("%s",src1);
}

