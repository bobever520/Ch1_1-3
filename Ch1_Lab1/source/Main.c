#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;

	printf("Enter two integers,and I will tell you\n");
	printf("the relationships they satisfy: ");

	scanf("%d%d",&num1, &num2);

	if (num1 == num2)
		printf("%d is equal to %d\n",num1,num2);
	
	system("pause");

	return 0;

}