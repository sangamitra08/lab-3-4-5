// prog to find the minimum, maximum and average in an unsorted array of integers //
#include <stdio.h>
int main(){
    int i,n;
    printf("Enter the number of values in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input the values in any order: ");
    for(i=0;i<n;i++){
        printf("Element %d",i);
        scanf("%d",&arr[i]);
    }
    // finding the maximum value in the array//
    int num=0;
    for(i=0;i<n;i++){
        if(arr[i]>=num)
          num=arr[i];
          
    }
    printf("The maximum value is: %d",num);
    // finding the minimum value in the array//
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<=min)
           min=arr[i];
    }
    printf("The minimum value is: %d",min);
    // finding the average of the numbers in the array//
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    float avg=sum/n;
    printf("The average of the numbers is %d",avg);
    return(0);
}

