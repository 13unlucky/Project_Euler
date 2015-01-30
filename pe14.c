#include <stdio.h>
#include <math.h>

int main(){

long long i ,count, j, best, bestnum;
j = 0;
i = 0;
count = 0;
best = 0;
bestnum = 0;

for(i = 1; i < 1000000; i++){
	j = i;
	while(j != 1){
		if(j%2 == 0)
			j = j/2;
		else
			j = ((3*j) + 1);
		count ++;
	}		 
	if (count > best){
		best = count;
		bestnum = i;
	}
	count = 0;
}
printf("%lld",bestnum);
return 0;
}