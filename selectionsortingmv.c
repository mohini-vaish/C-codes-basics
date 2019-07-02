#include<stdio.h>
#include<conio.h>
int main()
{
    int array[5],n,i,d,position,swap;
    printf("**********MOHINI VAISH***********\n");
printf("Enter number of elements:\t");
scanf("%d",&n);
printf("Enter %d integers you want to insert:\n",n);
for(i=0;i<n;i++)
    scanf("%d",&array[i]);
for(i=0;i<(n-1);i++)
{
    position=i;
for(d=i+1;d<n;d++)
{
    if(array[position]>array[d])
        position=d;
}
    if(position!=i)
    {
        swap=array[i];
        array[i]=array[position];
        array[position]=swap;

    }
}
  printf("Sorted (Selection sort) array is:\n");
  for(i=0;i<n;i++)
        printf("%d\n",array[i]);
        return 0;
}
