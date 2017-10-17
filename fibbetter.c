//Fibonacci Series using Dynamic Programming
#include<stdio.h>
 
int fib(int n)
{
  /* Declare an array to store Fibonacci numbers. */
  int f[n+1];
  int i;
 
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}
 
int main ()
{ int i,a,b;
long long int c;
  int n=9 ;
  a=1;
  b=0;
  scanf("%d",&n);
  if(n!=0&&n!=1)
  {for(i=0;i<n+4;i++)
  {  c=fib(i);
     if(c<=n&&c>=0)
     {
         printf("%d",c);//javascript:void(0);
      printf("\r\n");
     }
  }
  }
  else if(n==1)
   {printf("%d",b);
   printf("\r\n");
   printf("%d",a);
   printf("\r\n");
   printf("%d",a);
       
   }
   else if(n==0)
     printf("%d",b);
   
  //getchar();
  return 0;
}