#include<stdio.h>
void main()
{
  int a[100],b,n,i,j,k,r;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter the element to search:");
  scanf("%d",&r);
  printf("Enter the elements in the array:");
  for(i=1;i<=n;i++){
   scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
     if(a[i]>a[j]){
       b=a[i];
       a[i]=a[j];
       a[j]=b;
     }
    }
  }
  printf("After sorting:");
  for(i=1;i<=n;i++){
    printf("%d",a[i]);
    printf("\n");
  }
  k=n/2;
  if(r<a[k]){
    for(i=1;i<=n/2;i++){
        if(a[i]==r){
            printf("%d is present in the position a[%d]..",r,i);
        }
    }
  }
  else if(r>=a[k]){
    for(i=n/2;i<=n;i++){
        if(a[i]==r){
            printf("%d is present in the position  a[%d]..",r,i);
        }
    }
  }
  else {
    printf("%d is not present in this array..");
  }
}
