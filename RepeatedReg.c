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
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
					printf("The number %d is repeated \n",a[i]);
			}
		}
	}
	
	return 0;
}
