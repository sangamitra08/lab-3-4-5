//prog to delete all the duplicate elements from an array//
#include <stdio.h>
int main(){
    int i,j,n,t,k;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in any order: ");
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(a[i]==a[j]){
             for(k=j;k<n-1;k++){
                a[k]=a[k+1];
             }
           }
           n--;
           j--;
        }
    }
    for(i=0;i<n;i++)
       printf("New array: %d\n",a[i]);
}