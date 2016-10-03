#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <unistd.h>

void result_time(struct timeval* start, struct timeval* end, struct timeval* result)
{	
	result->tv_sec = end->tv_sec - start->tv_sec;
	result->tv_usec = end->tv_usec - start->tv_usec;
}

int main() {

	int* a;
	int i;
	int PAGESIZE  = 4096;
	int NUMPAGES;
	int j;
	int count;
	int count_100 = 0;

	struct timeval start;
	struct timeval end;
	struct timeval result;
	double total = 0;

	scanf("%d", &NUMPAGES);
	
	int jump = PAGESIZE / sizeof(int);
	
	a = (int*) malloc (sizeof(int)*NUMPAGES*jump);
	


	for (i = 0; i < NUMPAGES * jump; i += jump) {
	gettimeofday(&start, NULL);
	a[i] += 1;
	gettimeofday(&end, NULL);
	result_time(&start, &end, &result);
	printf("%ld microseconds\n", result.tv_usec);
	total = total + result.tv_usec;
	if (result.tv_usec > 100) {
		count = i/jump;
		printf("current count : %d\n", count);
		count_100 ++;
	}		
}	
	free(a);
	printf("Average time taken : %.3f microseconds\n", total/NUMPAGES);
	printf("100 up number : %d\n", count_100);
	return 0;
}


