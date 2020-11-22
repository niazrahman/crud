#include<stdio.h>

int main(){

int i,j=60;
for(i=1;i<=37;i+=3){
    printf("I=%d J=%d\n",i,j);
    j-=5;
}
    return 0;
}









printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    /* If position of element is not valid */
    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Make room for new array element by shifting to right */
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        /* Insert new element at given position and increment size */
        arr[pos-1] = num;
        size++; 

        /* Print array after insert operation */
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }