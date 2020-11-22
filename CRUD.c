#include<stdio.h>
#include <stdlib.h>
int arr[100],size,val,i,pos,n;
//1.1 array create
void create(){
    printf("Enter array size: ");
    scanf("%d",&size);
    printf("Enter how many values you want to insert(your value limit is %d): ",size);
    int num;
    scanf("%d",&num);
    if(num>size){
        printf("You cross the array limit.\n");
        printf("Please, Insert values in between 1 to %d.\n\n",size);  

    }else{
            for(i=0;i<num;i++){
            printf("Enter value: ");
            scanf("%d", &val);
            printf("Enter position: ");
            scanf("%d", &pos);
            if(pos>size){
                printf("Your array limit is [%d]\n",size);
                printf("Enter the position in between [1-%d]\n",size);
            }else{
                arr[pos-1] = val;
            } 
        }
    }
    printf("\n");
}


//1.2 Insert a value in array
void insert(){  
    if(size==0){
        printf("You have to create an array first\n");
        printf("----------------------------------\n\n");
    }else{
         printf("You can insert on these position: \n");
        for(i=0;i<size;i++){
            if(arr[i]==0){
                printf("[%d] ",i+1);
            }
        }   printf("\n");
            printf("Enter the position of the value: ");
            scanf("%d", &pos);
            int flag = 0;
          for(i=0;i<size;i++){
              if(arr[pos-1]!=0){
                  printf("Theree is no space in this position\n");
                  printf("You may enter in [Empty] space.\n");
                  flag = 1;
                  break;
              }else if(i+1==pos && arr[i+1]==0){
                printf("\n");
                printf("Enter value to insert : ");
                scanf("%d", &val);
                arr[pos-1] = val;
              }
          }

                if(pos > size+1 || pos <= 0){
                    printf("Invalid position! Please enter position between 1 to %d.\n\n", size);
                }
              
            
     
    }
   printf("\n");
}
      

// 2.1 Array read
void read(){
    printf("The array is :\n");
        for(i=0;i<size;i++){
        val=arr[i];
        if(val==0){
            printf("[Empty] ");
        }else{
            printf("%d ",val);
        }
    }
    printf("\n\n");
}


// 2.2  linear search
void search(){
 printf("Enter a value that you are searching for :");
 int flag = 0;
 scanf("%d",&n);
  for(i=0;i<size;i++){
           if(arr[i]==n){
               flag = 1;
         printf("Your value %d is at %d\n\n",n,i+1);  
     }
    }
    if(flag==0){
        printf("Value not found!!\n\n");
    }
 
}


// 2.3 find a value
void arrFind(){
    printf("Enter an position : ");
    scanf("%d",&i);
    if(i<=size){
         printf("Arr[%d] = %d\n",i,arr[i-1]);
    }else{
        printf("You have to input the right value\n\n");
    }
   
}


// Update array
void updatePos(){
    printf("You can update these values: \n");
    for(i=0;i<size;i++){
        if(arr[i]>0){
            printf("[%d] ",i+1);
        }
    }
    printf("\n");
      printf("Enter position: ");
        scanf("%d",&pos);
        int flag = 0;
        for(i=0;i<size;i++){
            if(arr[pos-1]==0){
                printf("There is no value in this position.\n");
                printf("Please!choose a position where value exists for update.\n");
                flag = 1;
                break;
            }else if(i+1==pos && arr[i+1]!=0){
                flag = 0;
                printf("\n");
                printf("Enter Value: ");
                scanf("%d",&val);
                arr[pos-1] = val;
            }
        }
        if(pos>size){
            printf("You have entered a wrong value.\n");
            printf("Please choose a position in between 0 - %d\n\n",size);
        }
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
        printf("\n ");
    }
}


// Delete full array
void deleteFullArray(){
    for(i=size;i>0;i--){
       size--;
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
            printf("press 2 to insert a new value in the array\n");
            int opt;
            scanf("%d",&opt);
            switch(opt){
                case 1:
                if(size==0){
                    create();
                }else{
                    printf("You already have an array\n");
                    printf("Do you still want to create a new array?\n");
                    int y;
                    printf("press 1 to create new\n");
                    printf("press 0 to go back\n");
                    scanf("%d",&y);
                    if(y==1){
                        for(i=0;i<size;i++){
                            arr[i]=0;
                       
       
               }
                        create();
                        printf("------------------------------\n"); 
                        printf("Array created sucessfully!!\n");
                        printf("-------------------------------\n");
                    }else if(y==0){
                        break;
                    }else if(y>1){
                        printf("You have to press 0 to go back\n");
                        scanf("%d",&y);
                         
                    }
                }
                break;
                case 2:
                insert();
                break;
                default:
                printf("Enter the right option(1-2)\n\n");
            }
            break;
            
            
            // Read array
            case 2:
            if(size!=0){
            printf("Press 1 to read full array\n");
            printf("Press 2 to search a value\n");
            printf("Press 3 to find a value with position\n");
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
                printf("Enter the right value.\nPress(1-5)\n\n");
            }
            break;
            }
            
            
            // update array
            case 3:
            if(size==0){
                printf("Create an array first\n");
            }else if(size!=0){
                     updatePos(); 
            }
            break;
            
            
            // delete array
            case 4:
            if(size==0){
                printf("Create an array first\n");
            }else if(size!=0){
            printf("Press 1 to delete position\n");
            printf("Press 2 to delete full array\n");
            int n;
            scanf("%d",&n);
                switch(n){
                    case 1:
                    delete();
                    break;
                    case 2:
                        printf("Are you sure want to delete full array?\n");
                        printf("If you press [1] you may loose all your data with array!!!\n");
                        printf("press 1 to delete!\n");
                        printf("press 0 to go back.\n ");
                        int opt;
                        scanf("%d",&opt);
                        if(opt==1){
                            deleteFullArray();
                            printf("Array deleted successfully!!\n");
                        }else if(opt==0){
                            break;
                        }else{
                            printf("You have to press 0 if you want to go back\n");
                            scanf("%d",&opt);
                            break;
                        }
                    break;
                    default:
                    printf("Enter the right value (1-2)\n");
                }
            }
            break;
            
            
            // exit
            case 5:
            exit(0);
            break;
            default:
            printf("Enter value from 1-5\n");
        }
    }while(1);
    return 0;
}

