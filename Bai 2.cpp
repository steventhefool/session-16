#include <stdio.h>
#include <stdlib.h>
void doi(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main(){
	int a,b;
	printf ("nhap vao gia tri a: ");
	scanf ("%d",&a);
	printf ("Nhap vao gia tri b: ");
	scanf ("%d",&b);
	printf ("gia tri a truoc khi hoan doi: %d\n", a);
	printf ("Gia tri b truoc khi hoan doi: %d\n", b);
	doi(&a,&b);
	printf ("gia tri a truoc khi hoan doi: %d\n", a);
	printf ("Gia tri b truoc khi hoan doi: %d\n", b);
	return 0;
}
