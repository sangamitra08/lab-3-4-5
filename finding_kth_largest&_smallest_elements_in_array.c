// prog to find the kth largest and kth smallest element//
#include <stdio.h>
int main(){
    int i,j,n,k,t;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the value of k:");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("The kth smallest no is %d:",a[k-1]);
    printf("The kth largest no is %d:",a[n-k]);

}