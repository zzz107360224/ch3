#include <stdio.h>
#include <stdlib.h>

long int factorial(int u);

void main(void)
{
	int x, z;
	long int ans;
	long int a, b, c;

	printf("求排列組合C(x,z)\n");
	printf("x=");
	scanf_s("%d",&x);
	printf("z=");
	scanf_s("%d",&z);

	a = factorial(x);
	b = factorial(z);
	c = factorial(x - z);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", x, z, ans);
	system("pause");
}
long int factorial(int u)
{
	int count;
	long int result = 1;
	for (count = 1; count <= u; count++)
	{
		result = result * count;
	}
	 return   result;

}
