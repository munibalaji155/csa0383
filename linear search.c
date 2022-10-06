#include<stdio.h>
void main()
{
  int a[100],b,c,d,i,j;
  printf("Enter size of array:");
  scanf("%d",&b);
  printf("enter the element to search:");
  scanf("%d",&c);
  printf("Enter the elements in the array:");
  for(i=1;i<=b;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<=b;i++){
    if(a[i]==c){
    printf("% is found at position a[%d]...",c,a[i]);
    break;
    }
  }
    if(i>=b)
    {
     printf("%d is not found in array..",c);
    }
}
