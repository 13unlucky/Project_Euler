#include <stdio.h>
#include <math.h>

int main(){

unsigned int low,hi,temp,sum;
sum = 0;

hi=1;
low = 1;


while(hi <= 4000000){
			temp = hi + low;
			if( temp % 2 == 0)
				sum += temp;
			low = hi;
			hi = temp;
}		 

printf("%d",sum);
return 0;
}