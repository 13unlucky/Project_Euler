/* 		
			Fibonacci.c 
		    PID [1A2544961]
			Andrew McKenzie
			12/22/14
*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include "Fibonacci.h"


HugeInteger *hugeAdd(HugeInteger *p, HugeInteger *q){
	
	int i, r, smallerSize;
	HugeInteger *sum = malloc(sizeof(HugeInteger)), *big, *small;
	int *test = NULL;
	
	if (sum == NULL || p == NULL || q == NULL){
		return NULL;
	}
	if (p->digits == NULL || q->digits == NULL){
		return NULL;
	}
	if (p->length >= q->length){
		sum->length = p->length + 1;
		small = q;
		big = p;
	}else if (q->length > p->length){
		sum->length = q->length + 1;
		small = p;
		big = q;
	}
	
	r = 0;
	
	sum->digits = calloc((sum->length),(sizeof(int)));
	if ( sum->digits == NULL ){
		free(sum);
		return NULL;
	}
	
	for (i = 0; i < small->length; i++){
	
		sum->digits[i] = p->digits[i] + q->digits[i] + r;
			
		if (sum->digits[i] >= 10){
			sum->digits[i] -= 10;
			r = 1;
		}else{
			r = 0;
		}	
	}
	
	if (small->length == big->length){
		if (r == 0){
			sum->length --;
			test = realloc(sum->digits,sizeof(int)*(sum->length));
			if(test == NULL){
				free(sum->digits);
				free(sum);
				return NULL;
			}
			sum->digits = test;
		}else{
			sum->digits[sum->length - 1] = 1;
		}	
	}else if((big->length - small->length)== 1){
		sum->digits[small->length] = sum->digits[small->length] + big->digits[small->length] + r;
		if (sum->digits[small->length] >= 10){
			sum->digits[small->length] -= 10;
			sum->digits[small->length + 1] = 1;
		}else{
			sum->length --;
			test = realloc(sum->digits,sizeof(int)*(sum->length));
			if(test == NULL){
				free(sum->digits);
				free(sum);
				return NULL;
			}
			sum->digits = test;
		}
	}else{
		sum->digits[small->length] = sum->digits[small->length] + big->digits[small->length] + r;
		for (i = (small->length + 1); i < sum->length-1; i++){
			sum->digits[i] = 0;
			sum->digits[i] = sum->digits[i] + big->digits[i];
		}
		sum->length --;
		test = realloc(sum->digits,sizeof(int)*(sum->length));
			if(test == NULL){
				free(sum->digits);
				free(sum);
				return NULL;
			}
			sum->digits = test;
	}
	
	return sum;
}

HugeInteger *fib(int n){

	HugeInteger *low = malloc(sizeof(HugeInteger));
	HugeInteger *hi = malloc(sizeof(HugeInteger));
	HugeInteger *temp;
	int count = 1;
	if (low == NULL || hi == NULL){

		return NULL;
	}
	int i;

	low->length = 1;
	hi->length = 1;
	
	low->digits = calloc((low->length),(sizeof(int)));
	hi->digits = calloc((hi->length),(sizeof(int)));
	
	if (low->digits == NULL || hi->digits == NULL){
		free(hi);
		free(low);
		return NULL;
	}
	
	low->digits[0] = 0;
	hi->digits[0] = 1;
	
	if (n == 0)
		return low;
	if (n == 1)
		return  hi;

	while(1){
		count++;
		temp = hugeAdd(hi,low);

		hugeDestroyer(low);
		low = hi;
		hi = temp;
		if (hi->length == 1000){
			printf("%d",count);
			break;
		}
	}

	hugeDestroyer(low);
	return hi;

}

HugeInteger *hugeDestroyer(HugeInteger *p){
	if(p = NULL);
		return NULL;
	free(p->digits);
	free(p);
	return NULL;
}

HugeInteger *parseString(char *str){

	HugeInteger *hi = malloc(sizeof(HugeInteger));
	hi->length = 0;
	int i;
	
	if (hi == NULL || str == NULL)
		return NULL;
	
	if (str[0] == '\n'){
		hi->digits = malloc((sizeof(int)));
		if (hi->digits == NULL)
			return NULL;
		hi->length = 1;
		hi->digits[0] = 0;
		return hi;
	}
	
	hi->length = strlen(str);
	hi->digits = malloc(sizeof(int)*hi->length);
	
	
	for(i = hi->length; i >= 0; i--)
		hi->digits[hi->length-i] = (int)(str[i-1] - '0');
	
	return hi;
 
}

HugeInteger *parseInt(unsigned int n){

	HugeInteger *hi = malloc(sizeof(HugeInteger));
	int i = 0;
	unsigned int tmp = n;
	
	if (hi == NULL)
		return NULL;
		

	
    while(tmp) {
        tmp /= 10;
        i++;
    }
	if (i == 0)
		i++;
		
	hi->length = i;

	hi->digits = malloc(sizeof(int)*(hi->length));
	
	if (hi->digits == NULL)
		return NULL;
	
	for(i = hi->length; i >= 0; i--){
		hi->digits[hi->length-i] = (n % 10);
		n /= 10;
	}
	
	return hi;
	
}


unsigned int *toUnsignedInt(HugeInteger *p){

	unsigned int *new = malloc(sizeof(unsigned int));
	HugeInteger *max;
	int i, go=0;
	
	
	max = parseInt(UINT_MAX);

	
	if (p == NULL || max == NULL || new == NULL || p->length > max->length)
		return NULL;

	if (p->length < max->length){
	
		for(i = p->length-1; i >= 0; i--){
			*new = *new * 10 + p->digits[i];
		}

		return new;
	}
	for(i = p->length-1; i >= 0; i--){
	
		if (p->digits[i] < max->digits[i])
				go = 1;
		if (go || p->digits[i] == max->digits[i])
			*new = *new * 10 + p->digits[i];
			continue;	
		if (p->digits[i] > max->digits[i]);
			return NULL;
	}

	return new;
}

void hugePrint(HugeInteger *p)
{
	int i;

	if (p == NULL || p->digits == NULL)
	{
		printf("(null pointer)\n");
		return;
	}

	for (i = p->length - 1; i >= 0; i--)
		printf("%d", p->digits[i]);
	printf("\n");
}

int main(void)
{
	int i = 0;
	HugeInteger *p;
	p = fib(10);
	hugeDestroyer(p);
	

	return 0;
}
