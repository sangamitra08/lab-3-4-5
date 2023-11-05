// program to add an element to an array and sort it //
#include <stdio.h>
int main(){
	int i,j,n,num,t;
	printf("Enter the number of elements to be added: ");
	scanf("%d",&n);
	int a[n];
	int b[n+1];
	printf("Enter the elements in any order: ");
	for(i=0;i<n;i++){
		printf("Element %d",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to be added: ");
	scanf("%d",&num);
	
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	b[n]=num;
	
	// sorting the array b //
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(b[j]>b[j+1]){
			  t=b[j];
			  b[j]=b[j+1];
			  b[j+1]=t;	
			}
		}
	}
	
	for(i=0;i<n+1;i++){
		printf("%d\n",b[i]);
	}
	
}
