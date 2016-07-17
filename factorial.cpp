//Program: Write a C program to find the factorial of any given number using recursion. 
//Author:Ayush Raj Sedhai
//Date:2016/07/17
//Refrence:Data structure using C and C++ page #127

 #include<stdio.h>
 #include<conio.h>
 int fact(int);
 int main()
 {
 	int num1;
 	printf("Enter any number\n");
 	scanf("%d",&num1);
 	printf("Factorial of the number is %d\n",fact(num1));
 	getch();
 }
 int fact(int n)
 {
 	int x,y;
 	if(n==0)
 	{
 		return(1);
 	}
 	else
 	{
 		x=n-1;
 		y=fact(x);
 		return(n*y);
	}
 }
