#include<stdio.h>
#include<conio.h>
main()
{
 int unit;
 float amount,total;
 clrscr();
 printf("Enter Electricity bill:");
 scanf("%d",&unit);
 if(unit<=50) amount=unit*0.50;
 else if(unit<=150) amount=25 + (100 - unit)*0.75;
 else if(unit<=250) amount=25+75+(250-unit)*1.20;
 else amount=25+75+120+(unit-250)*1.50;

 total=0.20*amount;
 printf("Electricity Bill:%f",total+amount);

 getch();
}