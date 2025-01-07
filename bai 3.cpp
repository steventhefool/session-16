#include <stdio.h>
#include <stdlib.h>
int tong (int *a,int *b, int sum){
	sum = *a +*b;
	return sum;
}
int main (){
	int a,b,sum=0;
	printf ("Nhap vao so a: ");
	scanf ("%d",&a);
	printf ("Nhap vao so b: ");
	scanf ("%d",&b);
	printf ("Tong hai so %d va %d la: %d",a,b,tong(&a,&b,sum));
}
