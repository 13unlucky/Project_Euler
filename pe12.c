
#include <stdio.h>
#include <math.h>

int factors(long long n){
	int tot = 1, count = 0;
	int div = 2;

	while(n!=0){
        if(n%div!=0){
			if (count > 0){
				tot = tot * (count + 1);

			}
			count = 0;
            div = div + 1;
        }else{
			n = n / div;
            count ++;

            if(n==1){
				tot = tot * (count + 1);

                break;
			}
        }
    }

	return tot;
}


int main(){
	long long num, triangle, count, i, j;
	num = 0;
	count = 0;
	i = 7; 
	triangle = 21;

	for(;;){

		triangle += i;

		if (factors(triangle) >= 500){
			printf("%lld\n", triangle);
			break;
		}
		
		i++;
	}

return 0;
}