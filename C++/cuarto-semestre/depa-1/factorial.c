#include <stdio.h>

float fctr(int);

main()
{
int n;
	printf("ingresa numero factorial:");
	scanf("%d", &n);
	printf("el valor es:%.0f\n", fctr(n));
}
float fctr(int n){
	int i;
	float sum = 1;
	for(i = 1; i <= n; ++i){
		sum = sum * (float)i;
	}
	if(n < 0)
		exit(1);
return sum;
}
