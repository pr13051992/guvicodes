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
		int count=0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
					count++;
					a[j]=-1;
			}
		}
		if(count==0 && a[i]!= -1){
			printf("%d is the uniqie number\n",a[i]);
		}
	}
	
	return 0;
}
