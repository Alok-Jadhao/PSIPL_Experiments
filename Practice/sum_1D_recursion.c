/*Write a recursive function for the following:
Find the sum of all elements in a 1D array*/

#include<stdio.h>

int sum(int arr[],int n){
    
    if(n<0)
        return 0;
    else
        return arr[n]+sum(arr,n-1);
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Sum of array is: %d",sum(arr,5));
    
}
