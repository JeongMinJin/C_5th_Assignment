#include <stdio.h>

int main(void)
{
	int r, i, j;
	double A[100][100] = {0};

	printf("열의 수를 입력하시오 : ");
	scanf("%d", &r);

	A[1][1] = 1;

	for(i=2; i<r+2; i++)
		for(j=1; j<i+1; j++)
			A[i][j] = A[i-1][j-1] + A[i-1][j];

	for(i=1; i<r+2; i++){
		for(j=1; j<i+1; j++){
			printf("%.0lf ", A[i][j]);
		}
	printf("\n");
	}


	return 0;
}