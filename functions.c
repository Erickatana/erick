#include<stdio.h>
/* funtion declaration*/
int max (int num1, int num2);
int main () 
{
	/*local variable difinition*/
	int a = 50;
	int b = 100;
	int ret;
	/*calling a funtion to get max value */
	
	ret = max(a,b);
	
	printf ( "max value is : %d\n", ret );
	
	return 0; 
}
	/*funtion returning the max between two numbers */
	int max (int num1 , int num2)
	{
 
	 	/*local variable declaration */
int result;
if (num1 > num2)
	result =num1;
else
	result = num2;
	
return result;
	 }	