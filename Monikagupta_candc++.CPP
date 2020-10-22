#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main()
{ int ch=0,random=0;
  clrscr();
  srand(time(NULL));
  do{
  printf("Please choose one option\n1.Rock\n2.Paper\n3.Scissors\n4.Quit\n");
  printf("You choose:");
  scanf("%d",&ch);
  if(ch==1||ch==2||ch==3||ch==4)
 {
  random=rand()%3+1;
  printf("Computer choose:%d\n",random);
  if(ch==1&&random==1||ch==2&&random==2||ch==3&&random==3)
  {
   printf("No one won,Match is draw\n");
  }
  else if(ch==1&&random==2||ch==2&&random==3||ch==3&&random==1)
  {
   printf("computer won the match\n");
  }
  else if(ch==2&&random==1||ch==3&&random==2||ch==1&&random==3)
  {
   printf("You won the match\n");
  } else if(ch==4)
  {
    exit(0);
  }

  } else if(ch<=5)
  {
   printf("You choose wrong option\n");
  }
  }while(1);

  getch();
}