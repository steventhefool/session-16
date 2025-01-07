#include <stdio.h>
#include <stdlib.h>
int n;
void chen (int *a,int value, int index){
	if (index <0){
		printf ("Vi tri chen khong hop le.\n");
	}
	else if (index >n){
		printf ("Vi tri chen khong hop le.\n");
	}
	else if (index >=0){
		n++;
		for (int i =n;i>=index;i--){
			a[i]=a[i-1];
		}
		a[index]=value;
		printf ("chen thanh cong.\n");
	}
	else if (index =n){
		n++;
		a[n]=value;
		printf ("chen thanh cong.\n");
	}
	printf ("Mang sau khi chen la: \n");
	for (int i =0; i<n;i++){
		printf ("%d ",a[i]);
	}
}
int main (){
	int a[n],value,index;
	printf ("Nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	for (int i =0; i<n;i++){
		printf ("Nhap gia tri cua phan tu thu %d: ",i);
		scanf ("%d",&a[i]);
	}
	printf ("Mang truoc khi chen\n");
	for (int i =0;i<n;i++){
		printf ("%d ",a[i]);
	}
	printf ("\n");
	printf ("Nhap gia tri can chen: ");
	scanf ("%d",&value);
	printf ("Nhap vi tri can chen: ");
	scanf ("%d",&index);
	chen (a,value,index);
	return 0;
}
