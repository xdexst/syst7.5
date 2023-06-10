#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v7.5: OK.\n");
	srand(time(0));

	int i,j,a[10][10];

	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			a[i][j]=rand()%201-100;
			if(j==9) {
				printf("%d\n",a[i][j]);
			} else {
				printf("%d, ",a[i][j]);
			}
		}
	}
	printf("New matrix:\n");
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			if(j<i) a[i][j] = 0;
			if(j==9) {
				printf("%d\n",a[i][j]);
			} else {
				printf("%d, ",a[i][j]);
			}
		}
	}
	
	return 0;
}
