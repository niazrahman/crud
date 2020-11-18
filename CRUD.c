#include<stdio.h>
#include <stdlib.h>
int arr[100],size,val,i,pos,n;
//1.1 array create
void create(){
    printf("Enter array size: ");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
}
// 1.2 Insert a value in array
void insert(){     
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);
   printf("Enter the value to insert\n");
   scanf("%d", &val);
   for(i=size-1;i>=pos-1;i--){
       arr[i+1] = arr[i];
       arr[pos-1] = val;
   }
   printf("Value of array is: ");
   for(i=0;i<size;i++){
       printf("%d ",arr[i]);
   }
   printf("\n");
}
// 2.1 Array read
void read(){
    printf("The array is : \n");
        for(i=0;i<size;i++){
        val=arr[i];
        printf("%d ",val);
    }
    printf("\n");
}
// 2.2  linear search
void search(){
 printf("Enter a value that you are searching for :");
 scanf("%d",&n);
  for(i=0;i<size;i++){
           if(arr[i]==n){
         printf("Your value %d is at %d\n",n,i+1);  
     }else{
         printf("Value not found\n");
        }
    }
 
}
// 2.3 find a value
void arrFind(){
    printf("Enter an index ");
    scanf("%d",&i);
    printf("Arr[%d] = %d\n",i,arr[i]);
}
// Update array
void updatePos(){
      printf("Enter position: ");
        scanf("%d",&pos);
        printf("Enter Value: ");
        scanf("%d",&val);
        arr[pos] = val;
}
// delete array
void delete(){
printf("Enter the position you want to delete: ");
scanf("%d",&pos);
if(pos<0||pos>size){
    printf("Invalid position\n");
}else{
    for(i=pos-1;i<size;i++){
        arr[i] = arr[i+1];
    }
    size--;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
        }
        printf("\n ");
    }

}
// Start main Function
int main(){
    do{
        printf("Press 1 to create an Array\n");
        printf("Press 2 to read an Array\n");
        printf("Press 3 to update an Array\n");
        printf("Press 4 to delete an Array\n");
        printf("Press 5 to exit an Array\n");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            // create array
            case 1:
            printf("press 1 to create an array\n");
            printf("press 2 to read a value from the array\n");
            int opt;
            scanf("%d",&opt);
            switch(opt){
                case 1:
                create();
                printf("------------------------------\n"); 
                printf("Array created sucessfully!!\n");
                printf("-------------------------------\n");
                break;
                case 2:
                insert();
                break;
                default:
                printf("Enter the right option\n");
            }
            break;
            // Read array
            case 2:
            printf("Press 1 to read full array\n");
            printf("Press 2 to search a value\n");
            printf("Press 3 to find a value with index\n");
            int n;
            scanf("%d",&n);
            switch(n){
                case 1:
                read();
                break;
                case 2:
                search();
                break;
                case 3:
                arrFind();
                break;
                default:
                printf("Enter the right value");
            }
            break;
            // update array
            case 3:
            updatePos();
            break;
            // delete array
            case 4:
            delete();
            break;
            // exit
            case 5:
            exit(0);
            break;
            deault:
            printf("Enter value from 1-5\n");
        }
    }while(1);
    return 0;
}

