#include <stdio.h>
#include <math.h>

int isA(int n){
	int i = 0;
	int sum = 0;
	int sum2 = 0;
	for(i=1; i<n; i++){
		if(n%i == 0)
			sum += i;
	}
	
	for(i=1; i<sum; i++){
		if(sum%i == 0)
			sum2 += i;
	}
	if(sum2 == n && sum != n)
		return 1;
	return 0;
	
}


int main(){

	int sum;
	int i = 0;
	for(i = 2; i < 10000; i++)
		if(isA(i))
			sum += i;
	printf("%d",sum);

}