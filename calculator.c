#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int l=0;
int k=0,result;
int menu(){
 	int ch;
 	printf("\t\tResult=%d",result);
 	printf("\n1.ADD");
 	printf("\n2.Sub");
 	printf("\n3.Multiply");
 	printf("\n4.Division");
 	printf("\n5.GetRemainder");
 	printf("\n6.Clear");
 	printf("\n7.Exit");
 	printf("\nenter your choice:");
	 scanf("%d",&ch);
	 return(ch);
}
void add(){
	int a,b;
	if(k){
		printf("\nenter a number: ");
		scanf("%d",&a);
		result+=a;
		printf("\nresult=%d",result);
	}
	else{
		printf("\nenter two numbers:");
		scanf("%d%d",&a,&b);
		result=a+b;
		printf("\nresult=%d",result);
	}
	k=1;
}
void sub(){
	int a,b;
	if(k){
		printf("\nenter a number: ");
		scanf("%d",&a);
		result-=a;
		printf("\nresult=%d",result);
	}
	else{
		printf("\nenter two numbers:");
		scanf("%d%d",&a,&b);
		result=a-b;
		printf("\nresult=%d",result);
	}
	k=1;
}

void mult(){
	int a,b;
	if(k){
		printf("\nenter a number: ");
		scanf("%d",&a);
		result*=a;
		printf("\nresult=%d",result);
	}
	else{
		printf("\nenter two numbers:");
		scanf("%d%d",&a,&b);
		result=a*b;
		printf("\nresult=%d",result);
	}
	k=1;
}
void division(){
	int a,b;
	if(k){
		printf("\nenter a number: ");
		scanf("%d",&a);
		result/=a;
		printf("\nresult=%d",result);
	}
	else{
		printf("\nenter two numbers:");
		scanf("%d%d",&a,&b);
		result=a/b;
		printf("\nresult=%d",result);
	}
	k=1;
}
void rem(){
	int a,b;
	if(k){
		printf("\nenter a number: ");
		scanf("%d",&a);
		result%=a;
		printf("\nresult=%d",result);
	}
	else{
		printf("\nenter two numbers:");
		scanf("%d%d",&a,&b);
		result=a%b;
		printf("\nresult=%d",result);
	}
	k=1;
}
void clear(){
	printf("\nOld data is cleared.");
	result=0;
	k=0;
}
void choice(n){
	switch(n){
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mult();
			break;
		case 4:
			division();
			break;
		case 5:
			rem();
		
			break;
		case 6:
			clear();
			break;
		case 7:
			
		exit(0);
			
		default:
			printf("\ninvalid entry");
			break;
	}
}
void main(){
	loop:
		system("cls");
choice(menu());	
getch();
	
goto loop;
}
