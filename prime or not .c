#include<stdio.h>
#include<conio.h>
void main ()
{
  int i,n ,c=0;

 clrscr();
 printf("enter the value of n") ;
 scanf("%d",&n) ;
 for (i=1 ;i<=n;i++)
 { 
   if(n%i==0)
     { 
       c++ ;
      }
    }
   if(c==2)
   { printf(" the number is prime"); 
   }
   else
   {
      printf(" the number is not prime ") ;
    }    
 
  getch() ;
}    