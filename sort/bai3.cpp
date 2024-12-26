#include<stdio.h>
void sortInc(int a[],int n){
	for(int i=1;i<n;i++){
		for(int j=i;j>=0;j--){
			if(a[j]>a[j-1]){
				break;
			}
			int tmp=a[j];
			a[j]=a[j-1];
			a[j-1]=tmp;
		}
	}
}
int main(){
	int n=6;
	sortInc(a,n);
	int k;
	scanf("%d",&k);
	int l=0,r=n-1;
	int check=1;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(a[mid]==k){
			printf("%d",mid);
			check=0;
			break;
		}else if(a[mid]<k){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	if(check==1){
		printf("Khong tim thay");
	}
}
