#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
void show_record();
void reset_score();
void all_score(float , char []);
void print(){
	FILE *fptr; 
 	char c,d[20];
	float a; 
	fptr = fopen("score1.txt", "r"); 
 	if (fptr == NULL) 
    	{ 
        	printf("Cannot open file \n"); 
        	exit(0); 
    	}
	printf(" Name\t\t\tScore\n");
	c = fgetc(fptr); 
    while (c != EOF) 
    {
	printf("%c",c); 
        c = fgetc(fptr); 
    }	
	 
  
    fclose(fptr); 
	puts("\n\nPress S if you want to play next game");
	puts("Press V if you want to see highest score");
	puts("Press H if you want to know rules");
	puts("Press R if you want to reset the score");
	puts("Press A if you want to view all player scores");	
	puts("Press Q key if you want to quit"); 	
 
}	

int score(int count){
  	long int sum=0;
  	for(int i=1;i<=count;i++)
    {
      if(i==1)
        sum=10000;
      else
        sum=sum+sum*10;
    }
	if(sum>0 && sum<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATIONS *****************");
	     printf("\n\t\t\t      !!!! You won $%ld!!!! \n",sum);}

	 else if(sum>=1000000 && sum<=10000000)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
	    printf("\n\t\t    !!!!!!!! YOU ARE A MILLIONAIRE !!!!!!!!");
	    printf("\n\t\t                 You won $%ld\n",sum);
	    printf("\t\t                   Thank You!!\n");
	}
	 else if(sum>=100000000 && sum<=1000000000)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
	    printf("\n\t\t    !!!!!!!! YOU ARE A BILLIONAIRE !!!!!!!!");
	    printf("\n\t\t                 You won $%ld\n",sum);
	    printf("\t\t                   Thank You!!\n");
	}
	 else if(sum>1000000000)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
	    printf("\n\t\t    !!!!!!!! YOU ARE A TRILLIONAIRE !!!!!!!!");
	    printf("\n\t\t                 You won $%ld\n",sum);
	    printf("\t\t                   Thank You!!\n");
	}
	 else
	{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN MONEY ********");
	    printf("\n\t      Thankyou for your participation");
	    printf("\n\t\t     !!!! TRY AGAIN !!!!\n");
	}
return sum;
}
void help()
   {
 printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 5 sets in this Quiz Game.");
    printf("\n >> In this you will get only 1 set randomly. In this game you will be asked a");
    printf("\n    total of 7 questions. Each of the two right answer will be awarded 10 times");
    printf("\n    the actual prize which is Rs.10,000!!!!!..........");
    printf("\n >> You will be given 4 options and you have to choice two correct options from ");
    printf("\n    the given options.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> On wrong answer the game will close and you will be awarded earned total prize till that stage!");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*******C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM*******\n");
puts("\n\nPress S if you want to play next game");
	puts("Press V if you want to see highest score");
	puts("Press H if you want to know rules");
	puts("Press R if you want to reset the score");
	puts("Press A if you want to view all player scores");
	puts("Press Q key if you want to quit");
}
void edit_score(float , char []);
int main(){
char a,choice;
	 printf("\t\t\tPROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t     THE Programming GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A CROREPATTI!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press A to view all player scores ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
while(1){
scanf("%c",&a);     
choice=toupper(a);
     if (choice=='H')
     {
	help();
     }
	else if(choice=='A')
	{
		print();
	}
	else if (choice=='V')
	{
		show_record();
	}
	else if (choice=='R')
	{
		reset_score();	
	}
   else if(choice=='S')
    {
	char playername[100];
    printf("\n\t\t\tRegister your name:");
     scanf(" %[^\n]s",playername);

    printf("\n ------------------  Welcome %s to Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 5 sets in this Quiz Game");
    printf("\n >> In this you will get only 1 set randomly. In this game you will be asked a");
    printf("\n    total of 7 questions. Each of the two right answer will be awarded 10 times");
    printf("\n    the actual prize which is Rs.10,000!!!!!..........");
    printf("\n >> You will be given 4 options and you have to choice two correct options from ");
    printf("\n    the given options.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> On wrong answer the game will close and you will be awarded earned total prize till that stage!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
   printf("\n\n\n Press Y to Continue: ");
char b;
int count=0,flag=0,x=0;
scanf(" %c",&b);
choice=toupper(b);
srand(time(0));
	if(choice=='Y')
	{
		int b=rand()%5;
			printf("\n\t\t\tYou got Set No.%d",b);
		switch(b){
		case 0:
			for(int i=0;i<7;i++)
			{
			char c,d;
			if(flag==1)
				break;
			switch(i){
			case 0:
				printf("\n\nQ-1) Which of the following is a Palindrome number?");
				printf("\n\nA.24042\n\nB.101010\n\nC.23232\n\nD.01234\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);				
				if((toupper(c)=='C' || toupper(c)=='A') && (toupper(d)=='C' || toupper(d)=='A')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='C' || toupper(c)=='A') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 1: printf("\n\n\nQ-2) What can a crossed legs of a person tell about his nature?");
				printf("\n\nA. He is happy and lively.\n\nB. He is feeling low and dissallowing.\n\nC. He is in anger?\n\nD. The person may be an introvert.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='D')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='A') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 2: printf("\n\n\nQ-3) How can a javascript code be effectively debugged?");
				printf("\n\nA. By checking the code in the console\n\nB. By using javascript commenting to rule out the possible mistakes\n\nC. By constantly reloading till it works\n\nD. By rewriting the whole code\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='B')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='D'))
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='B'))
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 3: printf("\n\n\nQ-4) One of the stockbrokers in your area has streamlined the trends of company A and B. One of the company is having a bigger order and is buying more shares. The other is going to be bankcrupt. What will be the most efficient way for you to invest in between the two companies.");
				printf("\n\nA. Buy the shares of company a\n\nB. Have a good idea of company B and help them in bailing out\n\nC. Help company A in buying company B\n\nD. Invest in both the companies till trends continue.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='B')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 4: printf("\n\n\nQ-5) Define the logic:Hundred soldiers went to the war.");
				printf("\n\nA. Forty soldiers did not turn up for the war.\n\nB. Twenty soldiers were killed in the war.\n\nC. The war was boycotted by sixty soldiers.\n\nD. Eighty soldiers returned alive.\n");
				printf("Your Answer: "); 
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='D' || toupper(c)=='B') && (toupper(d)=='D' || toupper(d)=='B')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='D' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='A') && (toupper(d)=='D' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 5: printf("\n\n\nQ-6) What is the best way to solve a problem?");
				printf("\n\nA. Break it in different Chunks\n\nB. Having a modular and general approach\n\nC. Rewiring the whole scenario \n\nD. Closing the program till you don't think about it\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='D')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 6: printf("\n\nQ-7) How to strenghthen your corporation");
				printf("\n\nA. Develop Strategies\n\nB.Shorten staff\n\nC. Cut tenders loose\n\nD. Have a long term planning\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='D')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
		   	}
		}
			x=score(count);
			edit_score(x,playername);
			break;
		case 1:
			for(int i=0;i<7;i++)
			{
			char c,d;
			if(flag==1)
				break;
			switch(i){
			case 0:
				printf("\n\nQ-1) What is the value of a (in decimal and binary)in this C code?\n#include <stdio.h>\nint main()\n{\n  int a = 4;\n  a = a << 1;\n  return 0;\n}");
				printf("\n\nA. 8\n\nB. 2\n\nC. 0 0 1 0\n\nD. 1 0 0 0\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);				printf("%c%c",c,d);
				if ((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='D' || toupper(d)=='A'))
				{
			    		printf("\nCorrect!!!");count++;
			   		 break;	
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 1: printf("\n\n\nQ-2) A pie chart is:");
				printf("\n\nA. a chart demonstrating the increasing incidence of obesity in society.\n\nB. an illustration where the data are divided into proportional segments according to the share each has of the total value of the data.\n\nC. only used in catering management research.\n\nD. is a circular statistical graphic, which is divided into slices to illustrate numerical proportion.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='D')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 2: printf("\n\n\nQ-3) The most powerful way to build self-confidence is");
				printf("\n\nA. Comparing yourself to others who are better than you\n\nB. Hearing others tell you how good you are\n\nC. Having done something before and succeeded.\n\nD. Do one thing that scares you every day.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='D')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='A') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 3: printf("\n\n\nQ-4) If (1-p) is the root of equation  x^2+px+(1-p)=0.Find its roots.");
				printf("\n\nA. 0\n\nB. 2\n\nC. -1\n\nD.1\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='C')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 4: printf("\n\n\nQ-5) What is the value of a and b in series 28 25 5 21 18 5 14 a b ?");
				printf("\n\nA. a=5\n\nB. a=11\n\nC. b=5\n\nD. b=10\n");
				printf("Your Answer: "); 
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='C')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 5: printf("\n\n\nQ-6) Which are the following are rules for brainstorming?");
				printf("\n\nA. Focus on quantity\n\nB. Criticism\n\nC. Discourage wild ideas\n\nD. Combine and improve ideas\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='D')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 6: printf("\n\nQ-7) Aman has to study 4 books English,Chemistry,Biology,Physics on 4 different days from Thursday to Sunday.Order of books is as follows :\n*Chemistry is studied on day before the day of English\n*Biology is studied after the day of Physics\nWhich of following are correct orders of books?");
				printf("\n\nA. Chemistry,Biology,English,Physics\n\nB. Biology,Chemistry,English,Physics\n\nC. Physics,Chemistry,Biology,English\n\nD. Chemistry,Physics,English,Biology\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='D')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='A') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
		   	};
		}
			x=score(count);
			edit_score(x,playername);
			break;
		case 2:
			for(int i=0;i<7;i++)
			{
			char c,d;
			if(flag==1)
				break;
			switch(i){
			case 0:
				printf("\n\nQ-1) Consider a number 10.Check whether its 1st and 3rd bit are set or not?");
				printf("\n\nA. 1st set is set\n\nB. 1st bit is clear\n\nC. 3rd set is set\n\nD. 3rd bit is clear\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);				
				if ((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='C'))
				{
			    		printf("\nCorrect!!!");count++;
			   		 break;	
				}
				else if((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='C' ))
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 1: printf("\n\n\nQ-2) Positive self talk is:");
				printf("\n\nA. Self defeating.\n\nB. Saying positive thing sbaout yourself to yourself.\n\nC. Saying positive thing sbaout yourself to others.\n\nD.  Noticing what your inner voice is saying.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='D')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 2: printf("\n\n\nQ-3) SCD TEF UGH 'a' WKL 'b'\nValue of a and b is :");
				printf("\n\nA.a=VIJ\n\nB. a=WIK\n\nC. b=XMO.\n\nD. b=XMN.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='D')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 3: printf("\n\n\nQ-4) To improve analytical skills,one must :");
				printf("\n\nA. Do not challenge yourself with some new problems\n\nB. Think out of the box\n\nC. Break complex problems into simpler form\n\nD.  Try only once\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='C')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 4: printf("\n\n\nQ-5) STATEMENT 1 -The prices of food grains and other essential commodities in the open market have risen sharply during the past three months.\n  STATEMENT 2 -The political party in opposition has given a call for general strike to protest against the government's economic policy.");
				printf("\n\nA. Statement II is the cause.	\n\nB. Statement I is its effect.\n\nC. Statement II is its effect.\n\nD. Statement I is the cause.\n");
				printf("Your Answer: "); 
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='D' || toupper(c)=='C') && (toupper(d)=='D' || toupper(d)=='C')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='D' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='D' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 5: printf("\n\n\nQ-6) Research is");
				printf("\n\nA. Searching again and again\n\nB. Finding solution to any problem\n\nC. Working in a scientific way to search for truth of any problem\n\nD. investigate systematically.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='D')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='B' || toupper(c)=='A') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 6: printf("\n\nQ-7) In a certain code, 'bi nie pie' means 'some good jokes' : 'nie bat lik' means 'some real stories' ; and 'pie lik tol' means 'many good stories'.\nWhich word in code means some and good?");
				printf("\n\nA. nie is some\n\nB. pie is good\n\nC. pie is some\n\nD. bi is some\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='B')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='A' ))
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
		   	};
		}
			x=score(count);
			edit_score(x,playername);
			break;
		case 3:
			for(int i=0;i<7;i++)
			{
			char c,d;
			if(flag==1)
				break;
			switch(i){
			case 0:
				printf("\n\nQ-1) #include<stdio.h>\nint main()\n{\n   char str1[] = \"CodeQuotient\";\n   char str2[] = {'C', 'o', 'd', 'e', 'Q', 'u', 'o', 't', 'i', 'e', 'n', 't'};\n   return 0;\n}\nWhich are the following statements are correct?");
				printf("\n\nA. sizeof(str1)=13\n\nB. sizeof(str2)=12\n\nC. sizeof(str2)=13\n\nD. sizeof(str1)=12\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);				
				if ((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='B'))
				{
			    		printf("\nCorrect!!!");count++;
			   		 break;	
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 1: printf("\n\n\nQ-2) What is the meaning of RESPECT?");
				printf("\n\nA. Positive feeling or admiration for another person or thing.\n\nB. Use foul language, yelling, ignoring others.\n\nC. admire deeply, as a result of their abilities, qualities, or achievements.\n\nD.  A person that tells themselves that they are dumb.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='C')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='D' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 2: printf("\n\n\nQ-3)  As x increases, y increases:");
				printf("\n\nA. Inversely proportional\n\nB. Directly proportional\n\nC. Positive correlation\n\nD. Negative correlation\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='C' || toupper(d)=='B')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 3: printf("\n\n\nQ-4)  Which of the following are storage devices?");
				printf("\n\nA. Printer\n\nB. Chip\n\nC. Compact Disk\n\nD. Monitor\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='B' || toupper(d)=='C')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 4: printf("\n\n\nQ-5)  Daya has a brother Anil, Daya is the son of Chandra. Bimal is Chandra`s father.\nWhich of the following statements are true?");
				printf("\n\nA. Anil is grandson of Bimal.\n\nB. b. Daya is grandson of Bimal.\n\nC. Anil is son of Bimal.\n\nD. Chandra is son of Anil.\n");
				printf("Your Answer: "); 
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='B')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='D' || toupper(c)=='C') && (toupper(d)=='A' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='D' || toupper(d)=='C') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 5: printf("\n\n\nQ-6) Which skills are required in troubleshooting?");
				printf("\n\nA. Being introvert\n\nB. Decision Making\n\nC. Being aggressive\n\nD. Team Work.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='D')){
					printf("\nCorrect!!!");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='A') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
					flag=1;
		           		break;
		       		}
			case 6: printf("\n\nQ-7) If in a certain language, MADRAS is coded as NBESBT, how is BOMBAY and PUNJAB coded in that code ?");
				printf("\n\nA. BOMBAY : CQNCBZ\n\nB. PUNJAB : QVOKBC\n\nC. PUNJAB : QVOMBC\n\nD. BOMBAY : CPNCBZ\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='D' || toupper(c)=='B') && (toupper(d)=='D' || toupper(d)=='B')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='D' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
		   	};
		}
			x=score(count);
			edit_score(x,playername);
			break;
		case 4:
			for(int i=0;i<7;i++)
			{
			char c,d;
			if(flag==1)
				break;
			switch(i){
			case 0:
				printf("\n\nQ-1) Which of the following syntax is correct for command-line arguments?");
				printf("\n\nA. int main(int var, char *varg[])\n\nB. int main(int argc, char *argv[])\n\nC. int main() {int argc, char *argv[]; }\n\nD. int main(char *argv[], int argc)\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);				
				if((toupper(c)=='B' || toupper(c)=='A') && (toupper(d)=='B' || toupper(d)=='A')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='A') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 1: printf("\n\n\nQ-2) Respecting others means:");
				printf("\n\nA. Helping others\n\nB. Making fun of others\n\nC. Being cruel\n\nD. Using nice words\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='D')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 2: printf("\n\n\nQ-3)  STATEMENT 1-A huge truck overturned on the middle of the road last night.\nSTATEMENT 2-The police had cordoned of entire area in the locality this morning for half of the day.");
				printf("\n\nA. Statement I is its effect.\n\nB. Statement II is its effect.\n\nC. Statement I is the cause\n\nD. Statement II is the cause\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='C' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='B')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='C' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='D'))
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='B'))
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 3: printf("\n\n\nQ-4) What is the full form of WWW & URL?");
				printf("\n\nA. WWW :World Wide Website\n\nB. URL :Universal Resource Locator\n\nC. URL :Uniform Resource Locator\n\nD. WWW :World Wide Web\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='D' || toupper(c)=='C') && (toupper(d)=='D' || toupper(d)=='C')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 4: printf("\n\n\nQ-5) A,B,C and D are 4 persons in family.A is daughter of B.B is son of C.C is father of D.D is a male.\nWhich of the following statements are true?");
				printf("\n\nA. D and B are brothers.\n\nB. If D is daughter of B,then A and D are sisters.\n\nC. C is uncle of A.\n\nD. A is daughter of D.\n");
				printf("Your Answer: "); 
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='B')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='B') && (toupper(d)=='C' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 5: printf("\n\n\nQ-6) According to six thinking hats technique,which of the following are correct:");
				printf("\n\nA. The White Hat calls for information known or needed. \"The facts, just the facts.\"\n\nB. The Black Hat signifies feelings, hunches and intuition. When using this hat you can express emotions and feelings and share fears, likes, dislikes, loves, and hates.\n\nC. The Yellow Hat focuses on creativity; the possibilities, alternatives, and new ideas. It's an opportunity to express new concepts and new perceptions.\n\nD. The Blue Hat is used to manage the thinking process. It's the control mechanism that ensures the Six Thinking Hats® guidelines are observed.\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='A' || toupper(d)=='D')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='A' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='B') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='B') && (toupper(d)=='A' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
			case 6: printf("\n\nQ-7) Consider the series 1, 2, 3, 5, 8, a, b.What is the value of a and b?");
				printf("\n\nA. b=34\n\nB.  a=13\n\nC. b=21\n\nD. a=11\n");
				printf("Your Answer: ");
				scanf(" %c %c",&c,&d);
				if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='B' || toupper(d)=='D')){
					printf("\nCorrect!!!\n");count++;
			   		 break;
				}
				else if((toupper(c)=='B' || toupper(c)=='D') && (toupper(d)=='C' || toupper(d)=='A') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else if((toupper(c)=='C' || toupper(c)=='A') && (toupper(d)=='B' || toupper(d)=='D') )
				{
					printf("\nOne Option is Correct!!! Better luck next Time.!!!");
					flag=1;					
					break;
				}
				else
		       		{
		           		printf("\n\nWrong Answer!!!\n");
		           		flag=1;
					break;
		       		}
		   	}
		}
			x=score(count);
			edit_score(x,playername);
			break;
		}
	}
	all_score(x,playername);
	puts("\n\nPress S if you want to play next game");
	puts("Press V if you want to see highest score");
	puts("Press H if you want to know rules");
	puts("Press R if you want to reset the score");
	puts("Press A if you want to view all player scores");
	puts("Press Q key if you want to quit");	
}
else if(choice=='Q')
{
	break;
}
}
return 0;
}

void show_record()
    {
	char name[100];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f," %[^\n]s",name);
	fscanf(f,"%f",&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t    %s has scored the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************\n");
	fclose(f);
	puts("\n\nPress S if you want to play next game");
	puts("Press V if you want to see highest score");
	puts("Press H if you want to know rules");
	puts("Press R if you want to reset the score");
	puts("Press A if you want to view all player scores");
	puts("Press Q key if you want to quit");
    }

void reset_score()
    {
    	float sc;
	char nm[100]="____";
	FILE *f;
	f=fopen("score.txt","w");
	sc=0;
	fprintf(f,"%s\n %.2f",nm,sc);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t\t               Score has been reset");
	printf("\n\n\t\t*************************************************************\n");
	printf("\n");
    	fclose(f);
	puts("\n\nPress S if you want to play next game");
	puts("Press V if you want to see highest score");
	puts("Press H if you want to know rules");
	puts("Press R if you want to reset the score");
	puts("Press A if you want to view all player scores");
	puts("Press Q key if you want to quit");
    }
void edit_score(float score, char plnm[100])
	{
	float sc;
	char nm[100];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f," %[^\n]s",nm);
	fscanf(f,"%f",&sc);
	if (score>=sc)
	{
       	    sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f," %s\n %.2f\n",plnm,sc);
	    fclose(f);
	}
}
void all_score(float score, char plnm[100])
{
	float sc;
	char nm[100];
	FILE *f;
	f=fopen("score1.txt","a+");
	    sc=score;
	    fprintf(f," %-20s\t%.2f\n",plnm,sc);
	    fclose(f);
}
