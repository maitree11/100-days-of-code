//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/

#include <stdio.h>

int prime(int number){
	for ( int i = 2; i<= number;i++)
	{
		if ( number % i==0 && number != i)
		{
			return 0;
		}
	}
	return 1;
}

int main(){
	int input;
	scanf("%d" , &input);
	for ( int number = 2;number<=input;number++)
	{
		if (prime(number))
			printf("%d " , number);
	}
	return 0 ;
}














//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	int *arr=0;
	int length;
	scanf("%d", &size);
	arr=  malloc( size * sizeof(int));
	for (int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	for ( int i = 0 ; i<size;i++)
	{
		printf("%d " , arr[i]);
	}
	
	return 0 ;
}
