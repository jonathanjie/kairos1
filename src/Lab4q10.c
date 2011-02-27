#include <stdio.h>
int main( void ){
    int dimension=0, row=0, col=0, space=0, num=0, n=0, nfac=0, k=0, kfac=1, nk=0, nkfac=1;

    printf("Enter the triangle side: ");
    scanf("%d", &dimension);

    while (row < dimension) {
        col=dimension-row-1;

	for (space=dimension-row; space>0; --space)
		printf(" ");
	if (row>0){
		n = row;
		nfac *= n;}
	else nfac=1;
	k=0;
        while (col < dimension) {
		kfac *= k;
		nkfac = 1;
		for (nk = 1; nk <= (n-k); nk++) {
			nkfac *= (nk); }
		if (kfac==0) {
			kfac=1;}
		k++;
		printf("%d ", nfac / (kfac * nkfac));
		++col;}
        printf("\n");
        ++row;
    }
    return 0;}
