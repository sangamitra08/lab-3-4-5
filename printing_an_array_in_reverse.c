#include <stdio.h>
int main(){
    int i,j,n,t;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in any order: ");
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n/2);i++){
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }

    for(i=0;i<n;i++)
       printf("%d \n",a[i]);

    return(0);   
}