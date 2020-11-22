#include<stdio.h>
#include<stdlib.h>
int a[100],n,i,ch,val,pos;
void create(){
    printf("Enter the numbers of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        }
    }
void display(){
    printf("The elements of the array are\n");
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insert(){
    printf("Enter the position where the value be inserted\n");
    scanf("%d",&pos);
    printf("Enter the value\n");
    printf("%d",val);
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    n=n+1;
}
void delete(){
   if(n!=0){
       printf("Enter the position you want to delete\n");
       scanf("%d",&pos);
       for(i=pos-1;i<n-1;i++){
           a[i] = a[i+1];
       }
       n=n-1;
   }
   else{
       printf("Array is empty\n");
   }

}
// void exit(){
//     exit(0);
// }


int main(){
    do{
printf("Enter your choice: \n");
printf("1:Create\n");
printf("2:Display\n");
printf("3:Insert\n");
printf("4:Delete\n");
printf("5:Exit\n");
scanf("%d",&ch);

switch(ch){
    case 1:
    create();
    break;
    case 2:
    display();
    break;
    case 3:
    insert();
    break;
    case 4:
    delete();
    break;
    // case 5:
    // exit(0);
    break;
    default:
    printf("Enter the right choice\n");
}


    }while(ch!=5);

return 0;
}