#include<stdio.h>
void main()
{
 int n,i,j,k,a[20];
 printf("enter the elements in the array:");
 for(i=1;i<=20;i++){
 scanf("%d",&a[i]);
 if(a[i]%2==0){
    printf("a[%d] is even number..",i);
    printf("\n");
 }
 else
    printf("a[%d] is odd number..",i);
    printf("\n");
 }
}
