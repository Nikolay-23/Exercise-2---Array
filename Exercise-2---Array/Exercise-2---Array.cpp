

#include <iostream>

int main()
{
    double num[10];
    double sum = 0;
	double average;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%lf", &num[i]);
		sum += num[i];
	}
	average = sum / 10;
	printf("%lf", average);
	printf("\n");
	printf("%lf", sum);
}

