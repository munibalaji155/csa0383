#include<stdio.h>
#include<stdlib.h>
int *arr;
int i = 0;
//function_to_insert_data..
void insert(int data){
  if(i == 0){
    arr = malloc(sizeof(data));
    arr[i] = data;
  }
  else{
    arr = realloc(arr, sizeof(data));
    arr[i] = data;
  }
  i++;
  printf("Insertion success..!");
}

//function_to_delete_data..
void dlt(int data){
  int j;
  int t = 0;
  for(j = 0;j < i ;j++){
    if(arr[j] == data){
         while(j < i-1){
            arr[j] = arr[j+1];
            j++;
         }
        t = 1;
    }
  }
  if(t == 0){
    printf("No such data to dlt..!\n");
    return;
  }
       i--;
       arr = realloc(arr,j-1);
       printf("Deletion success!..\n");
}

//function_to_update_content..
void update(int data){
    int updateValue;
    int j;
    for( j = 0;j <i;j++){
        if(arr[j] == data){
            printf("Enter new value to update :");
            scanf("%d",&updateValue);
            arr[j] = updateValue;
            return;
        }
    }
    printf("No such data avail in this array to dlt...\n");
}

//function_to_display..
void display(){
    if(i == 0){
       printf("Array is empty..!\n");
       return;
       }
   printf("The array content is :");
   int j;
   for( j = 0;j < i;j++){
    printf("%d->",arr[j]);
   }
}


//main_function..
void main(){
    int choice, data, index;
    while(1){
        printf("\n");
        printf("1.insert\n2.deletion\n3.update\n4.display\n5.quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:printf("Enter data to insert :");
               scanf("%d",&data);
               insert(data);
               break;
        case 2:if(i!=0){
               printf("Enter data to delete :");
               scanf("%d",&data);
               dlt(data);
               }
               else{
                printf("Array is empty..!\n");
               }
               break;
        case 3:if(i!=0){
               printf("Enter data to update :");
               scanf("%d",&data);
               update(data);
               }
               else{
                printf("Array is empty!..\n");
               }
               break;
        case 4:display();
               break;
        default: exit(0);
        }
    }

}
