#include <stdio.h>
#include <math.h>

int main(){
	int i,j,k=2, num = 1, cur = 1;
	
	for(i = 0; i<500; i++){
		for(j=1; j<=4; j++){
			printf("%d ",cur);
			cur +=k;
			num = num + cur;
		}
		k += 2;
	}
	printf("%d",num);
}