#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("are you worth your weight in platinum?\n");
	scanf_s("%f",&weight);
	value = 1700 * weight * 14.5833;
	printf("%2f",value);
	getchar();
	getchar();
	return 0;
}