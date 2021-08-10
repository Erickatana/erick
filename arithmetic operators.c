#include <stdio.h>

main()
{
	int a = 31;
	int b = 15;
	int c;
	
	c = a + b;
	printf("case 1 - value of c is %d\n",c);
	c = a - b;
	printf("case 2 - value of c is %d\n",c);
	c = a * b;
	printf("case 3 - value of c is %d\n",c);
	c = a / b;
	printf("case 4 - value of c is %d\n",c);
	c = a % b;
	printf("case 5 - value of c is %d\n",c);
	c = a++;
	printf("case 6 - value of c is %d\n",c);
	c = a--;
	printf("case 7 - value of c is %d\n",c);
	return 0;
}