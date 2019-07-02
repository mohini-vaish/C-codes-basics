#include<conio.h>
#include<stdio.h>
struct list
{ int info;
struct list *next;
}*start=NULL,*last=NULL,*p;
void create()
{
int e,m;
do{p=(struct list*)malloc(sizeof(struct list));
printf("\nEnter value to be inserted");
scanf("%d",&e);
p->info=e;
p->next=NULL;
if(start==NULL)
start=last=p;
else
last->next=p;
last=p;
printf("\nWant to enter more enter 1 for yes and 2 for no");
scanf("%d",&m);
}while(m==1);
}
void print()
{
for(p=start;p!=NULL;p=p->next)
{printf("\n%d",(p->info));
}
}
void insb(int n,int v)
{ int c;
struct list *ne;
for(p=start,c=1;p!=NULL,c<(n-1);p=p->next,c++);
if(p==NULL)
{printf("unsucessful insertion");
}
else
{
    ne=(struct list*)malloc(sizeof(struct list));
ne->info=v;
ne->next=NULL;
if(p==start)
{ne->next=start;
start=ne;
}
else
{ne->next=p->next;
p->next=ne;
}
} }
void insa(int n,int v)
{
struct list *ne;
int c;
for(p=start,c=1;p!=NULL,c<n;p=p->next,c++);
if(p==NULL)
{printf("\nUnsucessful insertion");
}
else
{ ne=(struct list*)malloc(sizeof(struct list));
ne->info=v;
ne->next=p->next;
p->next=ne;
}
}
void delet(int t)
{int c;
for(p=start,c=1;p!=NULL,c<(t-1);p=p->next,c++);
printf("%d is deleted",p->next->info);
p->next=p->next->next;
}
void main()2
{
int c,h,m,i,j,k,t;

printf("\nHARJAS KALSI");
do
{
    printf("\nEnter \n1.FOR CREATING \n2.FOR PRINTING \n3.FOR INSERTING BEFORE \n4.FOR INSERTING AFTER \n5.DELETING ");
scanf("%d",&c);
switch(c)
{
case 1:create();
break;
case 2:print();
break;
case 3:printf("\n element to be inserted ");
scanf("%d",&h);
printf("\n Before which node ");
scanf("%d",&i);
insb(i,h);
break;
case 4:printf("\n Enter element to be inserted ");
scanf("%d",&k);
printf("\n After which node ");
scanf("%d",&j);
insa(j,k);
break;
case 5:printf("\nEnter node to be deleted");
scanf("%d",&t);
delet(t);
break;
default:printf("\n wrong operation");
}
printf("\n want to perform more operations \nEnter 1 for yes \nEnter2 for no");
scanf("%d",&m);
}while(m==1);
getch();
}
