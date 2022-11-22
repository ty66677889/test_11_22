#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[50];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	int q = 0;
	q = a[0] % 3;
	a[0] = a[0] / 3;
	a[1] = a[0]  + a[1];
	q = q + a[1] % 3;
	a[1] = a[1] / 3;
	a[2] += a[1];
	q += a[2] % 3;
	a[2] = a[2] / 3;
	a[3] += a[2];
	q += a[3] % 3;
	a[3] /= 3;
	a[4] = a[4] + a[3] + a[0];
	q += a[4] % 3;
	a[4] /= 3;
	a[0] += a[4]+a[1];
	a[1] += a[2];
	a[2] += a[3];
	a[3] += a[4];
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	printf("\n%d", q);
	return 0;
}