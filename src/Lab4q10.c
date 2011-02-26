#include <stdio.h>
int main( void ){
    int dimension=0, row=0, col=0, space=0, num=0, n=0, nfac=0, k=0, kfac=0;

    printf("Enter the triangle side: ");
    scanf("%d", &dimension);

    while (row < dimension) {
        col=dimension-row-1;

	/*for (space=dimension-row; space>0; --space)
		printf(" ");*/
	if (row>1){
		n = row;
		nfac *= n;
		n++;}
	else nfac=1;
	
        while (col < dimension) {
		printf("%d ", nfac);
		++col;}
        printf("\n");
        ++row;
    }
    return 0;
}
