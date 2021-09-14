#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main() {
	int* ptr, n, i, s, x,*sig;
	printf("input size of array:");
	scanf("%d", &n);
	printf("input elements:");
	ptr = (int*)calloc(5,sizeof(n));
	for (i = 0; i < n; i++) {
		scanf("%d", ptr + i);
	}
	printf("inputted data:");
	for (i = 0; i < n; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	printf("||do you want to reallocate or free space ||\n||press 1 for reallocation||\n|| 2 for freeing space.||");
	scanf("%d", &s);
	if (s == 1) {
		printf("new size:");
		scanf("%d", &x);
		
		sig = (int*)realloc(ptr, sizeof(x));
		if (ptr != NULL) {
			ptr = sig;
		}
		printf("reallocation sucessful\n");
		printf("input elements:");
		for (i = 0; i < x; i++) {
			scanf("%d", (ptr + i));
		}
		printf("inputted data:"); 
		for (i = 0; i < x; i++) {
			printf("%d ", *(ptr + i));
		}
		
		
	}
	else
		if (s == 2) {
			free(ptr);
			printf("freeing up space has been successful\n");
	}
	
	

}