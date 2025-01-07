#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char inputString[100], reverseString[100];
	char *ptrrev, *ptrinput;
	printf ("Nhap vao mot chuoi: ");
	fgets (inputString,sizeof(inputString),stdin);
	inputString[strcspn(inputString,"\n")] ='\0';
	int n =strlen(inputString);
	ptrrev=reverseString;
	ptrinput=inputString;
	for (int i=n-1;i>=0;i--){
		if (*(ptrinput+i) != '/0'){ 
		*(ptrrev++) = *(ptrinput+i);  
	}
	}
	printf ("Chuoi dau tien la: %s\n", inputString);
	printf ("Chuoi thu hai la: %s\n", reverseString);
}
