#include<stdio.h>

int main()
{
   int a[20],n=0,x=0,i=0,flag=0;
   printf("How many elements?");
   scanf("%d",&n);
   printf("**********MOHINI VAISH*********\n");
   printf("\nEnter elements of the array\n");

   for(i=0;i<n;++i)
       scanf("%d",&a[i]);

   printf("\nEnter element to search:");
   scanf("%d",&x);
   for(i=0;i<n;++i)
   {
       if(a[i]==x)
       {
	   flag=1;
	   break;
       }
   }

   if(flag)
       printf("\nElement is found at position %d\n",i+1);//changed
   else
       printf("\nElement not found\n");

   return 0;
}
