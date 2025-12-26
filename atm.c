#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int withdrawal,bal=0,pin,pin2,try=3;


//Pin setting
int firstpin()
{
 { printf("Set pin:");
  scanf("%d",&pin);
 }
}


//pin testing
int pintry(){ if(try>0){
    printf("enter pin:");
    scanf("%d",&pin2);
    if(pin2!=pin)
    {
    printf("wong pin! %d tries left",try-1);try--;pintry();
    }}}


//banking
int scndstp()
{
 printf("1.Balance 2.withdraw 3.exit(1 or 2 or 3):\n");
 int uin;
scanf("%d",&uin);
 if(uin==1 || uin=="balance" ||uin=="1.balance"){
   printf("Balance:%d\n",bal);scndstp();}
 else if(uin==2){
   printf("withdrawal amount:");
   scanf("%d",&withdrawal);
   if(withdrawal>bal){
     printf("insufficient balance");
     return 1;}
   else{ bal=bal-withdrawal;printf("%drs withdrawn\n",withdrawal);scndstp();}}
 else if(uin==3){
   printf("exiting atm!");
   return 1;}
 else {printf("no such option\n");scndstp();}}


int main()
{ //pin setting
  printf("___Bank Account creation___\n\n");
  firstpin();
  //first deposit
  printf("enter first deposit:");
  scanf("%d",&bal);
  printf("press any key to enter atm");
  getch();
  system("cls");
  printf("\n___Entered Atm___\n");
  //pin testing
  pintry();
  //input&banking proccessing
  scndstp();
  return 0;
}
