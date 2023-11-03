// prog to find the occurence of a given number in an array //
#include <stdio.h>
int main(){
   int i,j,n,k;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the value of k:");
    scanf("%d",&k);
    printf("Enter the values in any order: ");
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        if(a[k]==a[i])
          count+=1;
    }
    printf("The number of times the element occurs is: %d",count);

}