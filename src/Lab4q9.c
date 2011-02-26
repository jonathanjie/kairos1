#include <stdio.h>
int main( void ){
    int dimension=0, row=0, col=0, space=0;

    printf("Enter the triangle side: ");
    scanf("%d", &dimension);

    while (row < dimension) {
        col=dimension-row-1;

	for (space=dimension-row; space>0; --space)
		printf(" ");

        while (col < dimension) {
		printf("* ");
		++col;}
        printf("\n");
        ++row;
    }
    return 0;
}
