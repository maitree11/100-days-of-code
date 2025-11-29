/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main(){
	int count = 1;
	int antiloop=7;
	for ( int row = 1 ; row <=5; row++)
	{
		for ( int star=1; star <=count;star++)
		{
			printf("*");
		}
		printf("\n");
		count +=2;
	}
	for ( int row = 1 ; row<=4;row++)
	{
		for (int star = 1;star<=antiloop;star++)
		{
			printf("*");
		}
		antiloop-=2;
		printf("\n");
	}
	return 0 ;
}

















/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Output 1:
Pattern with layers of stars as shown.
*/

#include <stdio.h>

int main(){
	int times = 3;
	int star = 1;
	for ( int row = 1;row<=4;row++)
	{
		for (int space = times;space>0;space--)
		{
			printf(" ");
		}
		for( int print=1;print<=star;print++)
		{
			printf("*");
		}
		star+=2;
		times--;
		printf("\n");
	}
	times=1;
	star=5;
	for ( int row = 1; row<=3;row++)
	{
		for ( int space=times;space>0;space--)
		{
			printf(" ");
		}
		for ( int print=1;print<=star;print++)
		{
			printf("*");
		}
		
		printf("\n");
		times++;
		star-=2;
	}
	return 0 ;
}
