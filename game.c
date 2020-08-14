#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int you,computer;

int makelogic(){
	switch(you){
		case 1: 
		if(computer==1){
			printf("\nHmmmm Game is draw\n");
			printf("\tYOU=Rock and Computer=Rock");
			getch();
		}
		else if(computer==2){
				printf("\nOOps YOU LOSE\n");
					printf("\tYOU=Rock and Computer=Paper");
					getch();
		}
		else{
			printf("\nHurray!!!YOU WON\n");
				printf("\tYOU=Rock and Computer=Scissor");
				getch();
		}
		break;
		    
			case 2:
				if(computer==1){
			printf("\nHurray!!!YOU WON\n");
			printf("\tYOU=Paper and Computer=Rock");
		}
		else if(computer==2){
				printf("\nHmmmm Game is draw\n");
					printf("\tYOU=Paper and Computer=Paper");
		}
		else{
			printf("\nOOps YOU LOSE\n");
				printf("\tYOU=Paper and Computer=Scissor");
		}
				
		break;
			case 3:
				if(computer==1){
			printf("\nOOps YOU LOSE\n");
			printf("\tYOU=Scissor and Computer=Rock");
		}
		else if(computer==2){
				printf("\nHurray!!!YOU WON\n");
					printf("\tYOU=Scissor and Computer=Paper");
		}
		else{
			printf("\nHmmmm Game is draw\n");
				printf("\tYOU=Scissor and Computer=Scissor");
		}
		break;
			case 4:
				exit(0);
		break;
			default:
				printf("Invalid entry\n");
		break;
		
	}
	return 0;
	
}
void comp(){
	label:
	computer=rand()%4;
	if(computer==0)
		goto label;
	
	you=menu();
	
}
int  main(){
	while(1){
	system("cls");
	comp();
	makelogic();
	getch();
}
return 0;
}
int menu(){
int ch;
	printf("|        WELCOME TO THE GAME         |\n");
	printf("enter your choice\n");
	printf("1:for rock\n");
	printf("2:for paper\n");
	printf("3:for scissors\n");
    printf("4:for exit\n");
    scanf("%d",&ch);
 
    return ch;
}
