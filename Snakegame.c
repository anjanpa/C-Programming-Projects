#include<stdio.h>
#include<conio.h>
void main(){
	int a=10;
	int *ptr;
	ptr=&a;
	printf("A=%d",*ptr);
	int **pdr;
	pdr=&a;
	printf("\npdr=%u",*pdr);
}
