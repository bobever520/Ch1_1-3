#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int num1;
	int num2;
	for (i = 0; i < 3; i++)
	{
		printf("Enter two integers,and I will tell you\n");
		printf("the relationships they satisfy: ");

		scanf_s("%d%d", &num1, &num2);

		if (num1 == num2)
			printf("%d is equal to %d\n", num1, num2);

		if (num1 == num2)
			printf("%d is equal to %d\n", num1, num2);

		if (num1 != num2)
			printf("%d is not equal to %d\n", num1, num2);

		if (num1 < num2)
			printf("%d is less then %d\n", num1, num2);

		if (num1 > num2)
			printf("%d is greater then to %d\n", num1, num2);

		if (num1 <= num2)
			printf("%d is less then or equal to %d\n", num1, num2);

		if (num1 >= num2)
			printf("%d is greater then or equal to %d\n", num1, num2);

		puts("\n");
	}
	system("pause");

	return 0;

}