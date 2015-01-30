
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int prime(int up){

	int *nums, *primes, i, j, count, cross, runs;
	long long total;
	runs = (int)sqrt((double)up)+1;
	up++;
	nums = calloc(up, sizeof(int));
	count = up;
	cross = 0;
	
	for (i = 2; i < up; i++){
	
		nums[i] = 1;
	}

	for (i = 2; i < runs; i++){
		
		if(nums[i]){
		
			for(j = (i*2); j < up; j += i){
			  cross++;
				if (nums[j]){
					
					nums[j] = 0;
					count--;
					
				}
			}
			

		
		}	
	}

	total = 0;
	for (i = 0; i < 2000000; i++){
			if(nums[i]){
				total +=i;
			}

	}
	printf("%lld",total);



}



int main(){

	prime(2000000);
	
	return 0;
	
}