#include <stdio.h>
#include <stdlib.h>
int a[10]={4,3,6,1,2,7,9,10,8,5};
int n = sizeof(a)/sizeof(int);
void timkiem (int *a,int found){
	int cnt=0,index;
	for (int i =0;i<n;i++){
		if (found == a[i]){
			cnt=1;
			index=i;
		}
	}
	if (cnt ==0){
		printf ("Gia tri can tim khong co trong mang.\n");
	}
	else if (cnt==1){
		printf ("so can tim o vi tri %d",index);
	}
}
int main (){
	int found;
	printf ("Nhap gia tri can tim: ");
	scanf ("%d",&found);
	timkiem (a, found);
	return 0;
}
