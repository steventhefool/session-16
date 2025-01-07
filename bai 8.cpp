#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char inputString[100], reverseString[100];
	char *ptrrev, *ptrinput;
	printf ("Nhap vao mot chuoi: ");
	fgets (inputString,sizeof(inputString),stdin);
	int n =strlen(inputString);
	ptrrev=reverseString;
	ptrinput=inputString;
	for (int i=n-1;i>=0;i--){
		if (*(ptrinput+i)!='/0'){    //Em de cho no neu no tro vao ky tu xuong dong thi no khong in ra nhung de trong "" thi bi loi. Thay sua giup em voi a.
		*(ptrrev++) = *(ptrinput+i);  
	}
	}
	printf ("Chuoi dau tien la: \n%s", inputString);
	printf ("Chuoi thu hai la: %s\n", reverseString);
}
