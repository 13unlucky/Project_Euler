#include <stdio.h>
#include <math.h>

int main(){
	double t,i,b,n ;
	t=1;
	b=1;
	for(i=1; i<=40; i++)
		t *= i;
	for(i=1; i<=20; i++)
		b *= i;
	b = b*b;
	
	n = t/b;
	printf("%lf\n", n);

	return 0;
}