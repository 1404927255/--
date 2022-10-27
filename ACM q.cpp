#include<stdio.h>
int main(void)
{
	double n, m, sum=0;
	while (scanf_s("%*s %lf %lf", &n, &m) != EOF)
	{
		sum += n * m;
	}
	
	printf("%.1f\n", sum);
}