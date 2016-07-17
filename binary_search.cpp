//Program:Write a C program to implement binary search.
//Author:Ayush Raj Sedhai
//Date:2016/07/17
//Refrence:Data structure using C and C++ page #133

# include<stdio.h>
#include<conio.h>
 # define size 100
 
 int binary(int [], int, int, int);
 
 int main()
 {
 	int a[size],i,num,answer,search;
 	printf("Enter the number of element in array : ");
 	scanf("%d", &num);
 	for (i=0;i<num;i++)
 	{
 		printf("Enter %d element of array : ",i+1);
 		scanf("%d", &a[i]);
 	}
 	int high = num-1;
 	int low = 0;
 	printf("\nEnter the number to be searched : ");
 	scanf("%d", &search);
 	answer=binary(a,search,high,low);
 	if(answer == 0)
 	{
 		printf("\nNumber is not in array.");
 	}
 	else
	{
 		printf("\nNumber is in array.");
 	}
 	return 0;
 }

 int binary(int a[], int search, int high, int low)
 {
	int mid,count;
 	if (low<=high)
 	{
 		mid=(high+low)/2;
 		if (search == a[mid])
 		{
 			count=1;
		}
 		else if (search < a[mid])
 		{
 			return binary (a,search,mid-1,low);
		}
 		else if (search > a[mid])
 		{
 			return binary (a,search,high,mid+1);
 		}
 	}
	else
 	{
 		return (count);
	}
 }
