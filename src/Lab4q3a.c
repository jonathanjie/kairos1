#include <stdio.h>
int main( void ){

	int num=0;
	int count=0;
	int ans=1;

	printf("Enter a positive integer: \n");
	scanf("%d", &num);
	
	count=num;
	
	if(num == 0) {
		printf("0!=1\n");
	} else if(num > 0) {
		while(count > 0) {
			ans*=count;
			count--;
		}
		printf("%d!=%d\n", num, ans); 
	} else if (num<0 || num%1>0) 
	{
		printf("The number you entered was invalid. Please try again.\n");
	}

	return 0;
}