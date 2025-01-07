#include <stdio.h>
#include <stdlib.h>
int num;
void sapxep (int *a){
	for (int i =1;i<num;i++){
		int min_value = a[i];
		int j=i-1;
		while (j>=0 && a[j]>min_value){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=min_value;
	}
	printf ("Mang sau khi sap xep la: \n");
	for (int i =0;i<num;i++){
		printf ("%d ",a[i]);
	}
}
int main(){
	int a[num];
	printf ("Nhap so phan tu trong mang: ");
	scanf ("%d",&num);
	for (int i =0; i<num;i++){
		printf ("Nhap phan tu thu %d: ",i);
		scanf ("%d",&a[i]);
	}
	sapxep(a);
	return 0;
}
