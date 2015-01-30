
#include <stdio.h>
#include <math.h>

int main(){

unsigned int i,sum;

i=3;
sum = 0;


while(i < 1000){
			if( i % 3 == 0 || i % 5 == 0){
				sum += i;
				printf("%d\n",i);
				}
				i++;

}		 

printf("\n%d\n",sum);
return 0;
}