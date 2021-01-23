#include<stdio.h>
#include<stdio.h>
void main()
{
 int i,a[10],n=0;
 printf("WELCOME TO THE GAME""KAUN BANEGA CROREPATHI""It contains 5 QUESTIONS each carries 10 LAKHS");

 for(i=1;i<=5;i++)
 {
  n=0;
  switch(i)
  {
  case 1:
   printf("which actor organise kbc 1.amir khan 2.katrina kaif 3.saif ali khan 4.amitab bachan ");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=6;
   }
   break;
  case 2:
   printf("Which is capital of INDIA 1.Delhi 2.faridabad 3.Hisar 4.Gurugam ");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=6;
   }
   break;
  case 3:
   printf("What is the YMCA located 1.Gurugam 2.Delhi 3. Rohtak 4.Faridabad ");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=6;
   }
   break;
  case 4:
   printf("Who among these is best club in YMCA 1.Abc 2.Abc 3.Manan 4.D ");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is ",i);
   }
   else
   {
    printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
    i=6;
   }
   break;
  case 5:
   printf("Main motive of Manan club 1.Dance 2.Yoga 3.Coding 4.Socal work");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000. Today in 5 min u have won 50lakh ruppes.",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000",i-1);
    i=6;
   }
   break;
  default:
   break;
   }
   }
   getch();
   }
