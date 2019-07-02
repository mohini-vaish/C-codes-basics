#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 30
struct stack
{char a[n];
 int top;
}s;
struct stack1
{int a[n];
 int top;
 }s1;

void push(char h)
{

  s.a[++(s.top)]=h;


 }


char pop()
{

 return(s.a[(s.top--)]);
 }

 void push1(int h)
{
  if(s1.top==n-1)
 {printf("\n stack overflow ");
 }
  else
  {s1.a[++(s1.top)]=h;
   }

 }


char pop1()
{if(s1.top==-1)
 {printf("\n stack is empty ");
  return 0 ;
 }
 else
 return(s1.a[(s1.top--)]);
 }
void conv()
{ char post[n],inf[ n];
 int i,j;
  printf("\n MOHINI VAISH\n");
  printf("\n Enter expression to be converted ");
 // gets(inf);
  scanf("%s",inf);
  for(i=0,j=0;inf[i]!='\0';i++)
  {if((inf[i]>='0')&&(inf[i]<='9'))
   {post[j++]=inf[i];
   }

  else { if(s.top==-1)
	 push(inf[i]);
	 else
	 { if(priority(inf[i])>=priority(s.a[s.top]))
	   push(inf[i]);
	   else
	   {while(priority(inf[i])<priority(s.a[s.top]))
	   {post[j++]=pop();
	   push(inf[i]);}
	   } } }}
  while(s.top!=-1)
  {post[j++]=pop();
   post[j]='\0';}
 puts(post);
 printf("\nThe answer of postfix expression is %d ",eval(post));

      printf("\nEnter Postfix Expression:\t");
      scanf("%s",post);
      eval1(post);
  }

 int priority(int c)
 {switch(c)
 { case'^':return 10;
  case '*':
  case '%':
  case '/':return 8;
  case '-':
  case '+':return 6;
  default: break;}
  }
  void main()
  {
  s.top=-1;
   conv();
   getch();
   }
int eval(char post[n])
{int i,a,b;
for(i=0;post[i]!='\0';i++)
{if(post[i]>='0'&&post[i]<='9')
 push1(post[i]-'0');
 else
 {switch(post[i])
 {case'*': b=pop1();
	    a=pop1();
	    push1(a*b);
	    break;
 case'/': b=pop1();
	    a=pop1();
	    push1(a/b);
	    break;
 case'+': b=pop1();
	    a=pop1();
	    push1(a+b);
	    break;
 case'-': b=pop1();
	    a=pop1();
	    push1(a-b);
	    break;
 case'^': b=pop1();
	    a=pop1();
	    push(a^b);
	    break;}}}
return(pop1());
}
//int eval1(char inf[n])
//{int i,a,b;
//for(i=strlen(inf)-1;i>=0;i--)
//{if(inf[i]>='0'&&inf[i]<='9')
 //push1(inf[i]-'0');
 //else
 //{switch(inf[i])
 //{case'*': a=pop1();
	//    b=pop1();
	  //  push1(a*b);
	    //break;
// case'/': a=pop1();
	//    b=pop1();
	  //  push1(a/b);
	    //break;
// case'+': a=pop1();
	//    b=pop1();
	  // push1(a+b);
	    //break;
 //case'-': a=pop1();
	//    b=pop1();
	 //   push1(a-b);
	   // break;
// case'^': a=pop1();
	//    b=pop1();
	  //  push(a^b);
	    //break;}}}
//return(pop1());
//}//
void eval1(char inf[])
{
      int i, length;
      char element, operator;
      length = strlen(inf);

      printf("\nInfix Expression:\t");
      printf("%c", inf[0]);
      for(i= 1; i < length;i++)
      {
            if(inf[i] == '-' || inf[i] == '/' || inf[i] == '*'|| inf[i] == '+'||inf[i] == '^')
            {
                  element = pop();
                  operator = inf[i];
                  printf(" %c %c", operator, element);
            }
            else
            {
                  push(inf[i]);
            }
      }int top=-1;
      printf("%c", inf[top--]);
}












