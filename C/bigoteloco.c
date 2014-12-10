#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	int i;
	for(i = 1; i < 1000; i++){
		printf(":/(\n");
		delay_s(0.01);
		system("clear");
		printf(":\\(\n");
		delay_s(0.01);
		system("clear");	
	}
}

delay_s(double seconds){
    clock_t end = clock() + (seconds * CLOCKS_PER_SEC);

    while (clock() < end){
	;
	}
}
