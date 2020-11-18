#include <stdio.h>

int main(void)
{
	float (*p[10]);
	float *sum1Ptr;
	float arr[10] = {1,2,3,4,5,6,7,8,9,10};
	size_t i;
	float sum_total;
	sum1Ptr = &sum_total;
	/**sum1 = arr[0]; */
	for (i = 0; i < 10; i++)
	{
		sum_total += arr[i];
		p[i] = (arr+i);
		printf("%f\n", *(p[i])); 
	}	
	/**sum1 = *sum1 - arr[0];*/
	printf("%f\n", *sum1Ptr);
	for (i = 0; i < 10; i++)
	{
		printf("%p\n", (void *)p[i]); 
	}


	return 0;
}