#include<stdio.h>
#include<conio.h>
#include<string.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
char ch;

void inputSymbol(){
	printf("\nPlayer 1 symbol: x");
	printf("\nPlayer 2 symbol: 0");
}
void gameName(){
	printf("\n\t\t      TIC TAC TOE GAME\n");
}
void show(){
	printf("\n\n\t\t\t---|--|--\n");
	printf("\t\t\t%c  |%c |%c  \n",a[0],a[1],a[2]);
	printf("\t\t\t---|--|--\n");
		printf("\t\t\t%c  |%c |%c \n",a[3],a[4],a[5]);
	printf("\t\t\t---|--|--\n");
		printf("\t\t\t%c  |%c |%c \n",a[6],a[7],a[8]);
	printf("\t\t\t---|--|--\n");
	
}
void check(char P,char S){
	int i;
	for(i=0;i<9;i++){
		if(a[i]==P){
			a[i]=S;
		}
	}
}
int count=0;
void play(){
	char p,s;
	printf("\nenter position and symbol for the player\n");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
	count++;
	check(p,s);
}
int end(){
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x')){
		return(100);
	}
	else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0')){
		return(200);
}
else if((a[1]=='x'&&a[4]=='x'&&a[7]=='x')){
		return(100);
	}
	else	if((a[1]=='0'&&a[4]=='0'&&a[7]=='0')){
		return(200);
	}
	else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x')){
		return(100);
	}
	else	if((a[2]=='0'&&a[5]=='0'&&a[8]=='0')){
		return(200);
	}
	else if((a[3]=='x'&&a[4]=='x'&&a[5]=='x')){
		return(100);
	}
	else	if((a[3]=='0'&&a[4]=='0'&&a[5]=='0')){
		return(200);
	}
	else if((a[2]=='x'&&a[4]=='x'&&a[6]=='x')){
		return(100);
	}
	else	if((a[2]=='0'&&a[4]=='0'&&a[6]=='0')){
		return(200);
	}
	else if((a[6]=='x'&&a[7]=='x'&&a[8]=='x')){
		return(100);
	}
	else	if((a[6]=='0'&&a[7]=='0'&&a[8]=='0')){
		return(200);
	}
	return(300);
}
void  start(){
	char pa;
	printf("\nEnter who will start the game : player 1 or 2\n");
	scanf("%c",&pa);
fflush(stdin);

}

void main(){
	start:
	system("cls");
	int k,i,flag=0;
	int count=0;
	gameName();
	show();
	inputSymbol();
	//start();
	int j;
	char another='y';
	label:
	play();
	system("cls");
	show();
	k=end();
if(count<9){

	if(k==100){
		
		printf("player 1 wins");
			count=0;
	}
	else if(k==200){
		printf("player 2 wins");
			count=0;	
	}
    else{
	goto label;

	}
}
else{
	printf("game draw\n");
	count=0;
}
	fflush(stdin);
	printf("\ndo you want to continue(y/n)?\t");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y'){
		a[0]='1';
		a[1]='2';
		a[2]='3';
		a[3]='4';
		a[4]='5';
		a[5]='6';
		a[6]='7';
		a[7]='8';
		a[8]='9';
		goto start;
	}
	getch();
}
