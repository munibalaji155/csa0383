#include<stdio.h>
void main()
{
   int n,i,j=1;
   printf("Enter  the value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
     j=j*i;
   }
   printf("factorial for %d:%d",n,j);
}


