//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int size;
	scanf("%d" , &size);
	int *arr;
	arr=malloc(sizeof(int) * size);
	for ( int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	printf("Even numbers:");
	for ( int ind = 0 ; ind < size; ind++)
	{
		if ( arr[ind] == 0 )
			continue;
		if ( arr[ind] % 2 == 0 )
		{
			printf("%d ", arr[ind]);
		}
			
		
	}
	printf("\nOdd numbers:");
	for ( int ind = 0 ; ind < size; ind++)
	{
		if ( arr[ind] == 0 )
			continue;
		if ( arr[ind] % 2 != 0 )
		{
			printf("%d ", arr[ind]);
		}
		
	}
	return 0 ;
}














//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int size ;
	scanf("%d" , &size);
	int *arr;
	int pos , neg , zero;
	arr=malloc(sizeof(int) * size);
	
	for ( int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	printf("Positive count:");
	for ( int i = 0 ; i < size ; i++)
	{
		if ( arr[i] > 0 )
			pos+=1;
	}
	printf("%d" , pos);
	printf("\nNegative count:");
	for ( int i = 0 ; i < size ; i++)
	{
		if ( arr[i] < 0 )
			neg+=1;
	}
	printf("%d" , neg);
	printf("\nZero count:");
	for ( int i = 0 ; i < size ; i++)
	{
		if ( arr[i] == 0 )
			zero+=1;
	}
	printf("%d" , zero);
	return 0 ;
}
	