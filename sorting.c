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
selection_sort()
{
    int array[5],n,c,d,position,swap,i;
printf("Enter number of elements:\t");
scanf("%d",&n);
printf("Enter %d integers you want to insert:\n",n);
for(i=0;i<n;i++)
{scanf("%d",&array[i]);
}
for(i=0;i<(n-1);i++)
{position=c;
for(d=c+1;d<n;d++)
{
    if(array[position]>array[d])
        position=d;
}
    if(position!=c)
    {
        swap=array[c];
        array[c]=array[position];
        array[position]=swap;

    }
}
  printf("Sorted (Selection sort) arrayis:\n");
  for(i=0;i<n;i++)
        printf("%d\n",array[i]);
        return 0;
}
//int insertion
int main()
{int choice,m;
//clrscr;
do
{
printf("*************MENU**********\n");
printf("ENTER YOUR CHOICE OF SORTING YOU WANT TO PERFORM:\n1.INSERTION \n2.SELECTION\n3.MERGE\n4.QUICK SORT\n5.HEAP SORT\n");
scanf("%d",choice);
switch(choice)
{
case 1:
    {
int a[MAX],i;
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
       break;
case 2:selection_sort();
       break;
default:printf("\nwrong operation");

}printf("\n want to perform more operations \nEnter 1 for yes \nEnter 2 for no");
	scanf("%d",&m);
	}while(m==1);
	getch();
	}
