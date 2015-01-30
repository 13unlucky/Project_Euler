#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


double findPF(double n){
	double div, count = 0, modeded;
	double prime ;
	div = 2;
	while(n!=0){
								modeded = fmod(n,div);
        if(modeded!=0)
            div = div + 1;
        else {
            n = n / div;
            printf("%f\n", div);
            if (div>prime)
            		prime = div;
		
            if(n==1)
                break;
        }
    }

	return prime;
}

int main(){

			printf("\n %f \n",findPF(600851475143));
	
    return 0;
}