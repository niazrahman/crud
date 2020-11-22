#include<stdio.h>
#include<stdlib.h>
int arr[100],n;

// array create function
int create(int num,int i){
printf("Enter value for array: ");
for(i=0;i<num;i++){
    scanf("%d",&arr[i]);
    printf("%d ",arr[i]);
}
printf("\n");
}


void printFullArray(){
    for(int i=0;i<100;i++){
     printf("%d, ",arr[i]);
    }
    printf("\n");
}

int main(){
 int i;
do{
    printf("Press 1 to create\n");
    printf("Press 2 to read\n");
    printf("Press 3 to upadte\n");
    printf("Press 4 to delete\n");
    printf("Press 5 to exit\n");
    int choice;
    scanf("%d",&choice);
    printf("Choice = %d\n",choice);
    switch(choice){
        case 1:
        printf("Press 1 to create a full array\n");
        printf("Press 2 to insert a value in array\n");
        int option;
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("Enter a array size: ");
             int n,i;
            scanf("%d",&n);
            create(n,i);
            break;
            case 2:
            continue;
        }
        case 2:
        printf("Press 1 to read full array\n");
        printf("press 2 to search\n");
        printf("Press 3 to find a specific value\n");
        int readChoice;
        scanf("%d",&readChoice);
        switch(readChoice){
            case 1:
            printFullArray();
            break;
            case 2:
            printf("This is for your search\n");
            break;
            case 3:
            scanf("%d",&i);
            printf("Arr[%d] = %d\n",i,arr[i]);
            break;
            default:
            printf("Enter value between 1-3\n");
            continue;
        }
        
        case 3:
        printf("Enter position: ");
        int pos,value;
        scanf("%d",&pos);
        printf("Enter Value: ");
        scanf("%d",&value);
        arr[pos] = value;
        break;
        case 4:
        printf("Enter array: ");
        int n,position,i;
        
        scanf("%d",&n);
        printf("Enter an array elements: ");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("Enter the position you want to delete: ");
        scanf("%d",&position);
        if(position<0||position>n){
            printf("Invalid position\n");
        }else{
            for(i=position-1;i<n;i++){
                arr[i] = arr[i+1];
            }
            n--;
            for(i=0;i<n;i++){
                printf("%d ",arr[i]);
            }
        }

        break;
        case 5:
        exit(0);
        break;
        default :
        printf("Enter number between 1-5\n");
        break;
    }
}while(1);



















    return 0;
}