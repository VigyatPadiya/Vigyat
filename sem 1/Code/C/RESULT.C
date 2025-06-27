#include<stdio.h>
#include<conio.h>
void main(){
	int roll,maths,pp,es,bwd,aoc,total,perc;
	char grade;
	clrscr();
	printf("Enter a Roll No.:");
	scanf("%d",&roll);
	printf("Enter the marks of maths:");
	scanf("%d",&maths);
	printf("Enter the marks of PP:");
	scanf("%d",&pp);
	printf("Enter the marks of ES:");
	scanf(" %d",&es);
	printf("Enter the marks of BWD:");
	scanf("%d",&bwd);
	printf("Enter the marks of AOC:");
	scanf("%d",&aoc);
	printf("\nMaths:%d",maths);
	printf("\nPP:%d",pp);
	printf("\nES:%d",es);
	printf("\nBWD:%d",bwd);
	printf("\nAOC:%d",aoc);
	total=maths+pp+es+bwd+aoc;
	printf("\nThe total is:%d",total);
	perc=(total*100)/500;
	printf("\nThe Percentage is:%d",perc);
	if (perc>90 && perc<100)
	{
		printf("\nGrade:A");
	}
	else if (perc>80 && perc<90)
	{
		printf("\nGrade:B");
	}
	else if (perc>70 && perc<80)
	{
		printf("\nGrade:C");
	}
	else if (perc>50 && perc<70)
	{
		printf("\nGrade:D");
	}
	else if (perc>35 && perc<50)
	{
		printf("\nGrade:E");
	}
	else {
	printf("\nGrade:F");
	}
	if (grade=='A' || grade=='B' || grade=='C'|| grade=='D'|| grade=='E')
	{
		printf("\nResult:Pass");
	}
	else
	{
		printf("\nResult:Fail");
	}


	getch();
	}