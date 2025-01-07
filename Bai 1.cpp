#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr, n;
	printf ("nhap gia tri cua n: ");
	scanf ("%d",&n);
	ptr=&n;
	printf ("Gia tri truoc khi thay doi la: \n");
	printf ("Dia chi cua n la: %p\n", ptr);
	printf ("Gia tri cua n la: %d\n", *ptr);
	printf ("Gia tri sau khi thay doi la: \n");
	printf ("Dia chi cua n la: %p\n", &n);
	printf ("Gia tri cua n la: %d\n", n);
	return 0;
}
