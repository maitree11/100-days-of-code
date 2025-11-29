//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *array;
	int size ;
	int sum=0;
	scanf("%d" , &size);
	array= malloc(sizeof(int) * size);
	for ( int i=0; i< size; i++)
	{
		scanf(" %d", &array[i]);
	}
	for ( int i=0; i< size; i++)
	{
		sum+= array[i];
	}
	printf("%d" ,sum);
	return 0 ;
}
















//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int size,og;
	int *array;
	scanf("%d", &size);
	int t;
	og= size;
	array=malloc(sizeof(int) * size);
	for ( int i = 0; i< size; i++)
	{
		scanf(" %d", &array[i]);
	}
	
	for ( int run = 1 ; run <= (og-1); run++)
	{
		for ( int i = 0 ; i < (size-1); i++)
		{
			if ( array[i] > array[i+1])
			{
				t = array[i];
				array[i]= array[i+1];
				array[i+1]= t;
			}
			
		}
		
		size -= 1;
	}
	printf("%d %d " , array[0], array[og-1]);
	return 0 ;
}
