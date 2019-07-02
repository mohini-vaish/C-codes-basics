#include<stdio.h>
#include<conio.h>
void quicksort(int num[],int first,int last)
{
   int i, j,c,temp;

   if(first<last){
      c=first;
      i=first;
      j=last;

      while(i<j){
         while(num[i]<=num[c]&&i<last)
            i++;
         while(num[j]>num[c])
            j--;
         if(i<j){
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }

      temp=num[c];
      num[c]=num[j];
      num[j]=temp;
      quicksort(num,first,j-1);
      quicksort(num,j+1,last);

   }
}

int main(){
   int i,count, num[20];
printf("********MOHINI VAISH******\n");
   printf("Enter the number of you want to enter:");
   scanf("%d",&count);

   printf("Enter  elements of your choice :");
   for(i=0;i<count;i++)
      scanf("%d",&num[i]);

   quicksort(num,0,count-1);

   printf("Order of (QUICK SORT) Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",num[i]);

   return 0;
   }
