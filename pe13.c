#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Fibonacci.h"

// print a HugeInteger (followed by a newline character)
void hugePrint(HugeInteger *p)
{
	int i;

	if (p == NULL || p->digits == NULL)
	{
		printf("(null pointer)\n");
		return;
	}

	for (i = p->length -1; i >= p->length -10; i--)
		printf("%d", p->digits[i]);
	printf("\n");
}

int main(void){
	int i,j;
	char str = '0';
	
	HugeInteger *p, *q, *temp;
	
	p = malloc(sizeof(HugeInteger));
	q = malloc(sizeof(HugeInteger));
	p->length = 50;
	q->length = 50;
	p->digits = malloc(sizeof(int)*p->length);
	q->digits = malloc(sizeof(int)*q->length);
	
	FILE* file = fopen ("pe13.txt", "r");
	
	for(i=0;i<50;i++){
		fscanf (file, "%c", &str);
		p->digits[49-i] = (str - '0');
		//printf("%i ", p->digits[i]);
	}
	fscanf (file, "%c", &str);
	//printf("\n", p->digits[i]);

	
	
	for(j=0;j<99;j++){
		for(i=0;i<50;i++){
			fscanf (file, "%c", &str);
			q->digits[49-i] = (str - '0');
			//printf("%i ", q->digits[i]);
		}
		fscanf (file, "%c", &str);

		//printf("\n", p->digits[i]);
		
		temp = hugeAdd(p,q);

		hugeDestroyer(p);	
		p = temp;
	}
	
	hugePrint(p);
	return 0;
}


