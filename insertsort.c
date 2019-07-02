#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int insertion(int *);
insertion(int *x)
{
int temp,i,j;
for(i=0;i<MAX;i++)
{temp=x[i];
j=i-1;
while(temp<x[j]&&j>=0)
{x[j+1]=x[j];
j=j-1;
}
x[j+1]=temp;
}
}
int main()
{
int a[MAX],i;
printf("***********MOHINI VAISH*******\n");
printf("Enter elements to be sorted:\n");
for(i=0;i<MAX;i++)
{
scanf("%d",&a[i]);
}
insertion(a);
printf("Sorted(INSERTION SORT)elements:\n");
for(i=0;i<MAX;i++)
{
printf("%d\n",a[i]);
}}
