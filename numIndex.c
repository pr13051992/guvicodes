#include<stdio.h>
int main(){
	int n;
	printf("Enter the array size");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the elements");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==i){
				printf("The number %d is equal to its index \n",a[i]);
		}
	}
	
	return 0;
}
