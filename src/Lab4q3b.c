#include <stdio.h>
int main( void ){

	int count=0;
	float sum=1.0;
	float fac=1.0;
	float num=1.0;

	printf( "Enter how many values to use in calulating e: " );
	scanf( "%d", &count );

	while (count>1){
		count--;
		sum += 1/(fac);
		num++;
		fac *= num;}

	printf( "e = %g\n", sum );

	return 0;
}
