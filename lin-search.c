#include<stdio.h>
void search(int arr[]){
  int i;
  for(i=0;i<100;i++){
    printf("%d ",arr[i]);
}
int main(){
  int n;
  printf("Enter the size of an array: ");
  scanf("%d",&n);

  int arr[n];
  int i,value;
  printf("Enter %d data: ",n);
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  search(n,arr[i]);
  return 0;
}