// prog to find duplicate elements in an array //
#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of the elements in any order: ");
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (a[i]==a[j])
              printf("%d\n",a[i]);
        }
    }
    return(0);
}