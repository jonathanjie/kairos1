#include <stdio.h>
int main( void ){
	int count=0;
	float x=1.0;
	float xPower=1.0;
	float sum=1.0;
	float fac=1.0;
	float num=1.0;

	printf( "Enter how many values to use in calculating e^x, followed by the value of x:\n");
	scanf( "%d%f", &count, &x );

	xPower=x;

	while (count>1){
		count--;
		sum += xPower/fac;
		num++;
		fac *= num;
		xPower *= x;}

	printf( "e^x = %g\n", sum );

	return 0;
}
