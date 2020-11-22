#include<stdio.h>

int main(){
   int arr[100];
int n,pos,i;
printf("Enter array: ");
scanf("%d",&n);
printf("Enter an array elements: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the position you want to delete: ");
scanf("%d",&pos);
if(pos<0||pos>n){
    printf("Invalid position\n");
}else{
    for(i=pos-1;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}



    return 0;
}