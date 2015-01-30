
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int prime(int up){

	int *nums, *primes, i, j, count, cross, runs;
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
	j = 0;
	if (count > 10001){
		for (i = 0; i < 1000000; i++){
			if(nums[i]){
			j++;

				if (j == 10001){
					printf("%d\n",i);
					return 0;
				}
			}
			count ++;
		}
	}



}



int main(){

	prime(1000000);
	
	return 0;
	
}
	