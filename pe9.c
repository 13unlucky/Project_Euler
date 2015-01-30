#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	double a,b,c, num;

	for (a = 0; a < 1000; a++){
		for (b = 0; b < a; b ++){
			c = sqrt((a*a) + (b*b));
			if ((a + b + c) == 1000){
				num = (a*b*c);
				printf("%f",num);
			}
		}
	}
return 0;
}
