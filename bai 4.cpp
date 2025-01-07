#include <stdio.h>
#include <stdlib.h>
void in (int *a, int n){
	for (int i=0; i<n;i++){
		printf ("%d ",*(a+i));
	}
}
int main (){
	int n, a[n];
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		printf ("Nhap gia tri phan tu thu %d: ", i);
		scanf ("%d", &a[i]);
	}
	in(a,n);
	return 0;
}
