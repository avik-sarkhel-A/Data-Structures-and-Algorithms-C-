/*Write a program to display n number of elements. 
Memory should be allocated dynamically using malloc( ).*/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr,n,i;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter array elements:-\n");
    for(i=0;i<n;i++){
        printf("\nEnter elments: ");
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements:-  \n ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}