#include <stdio.h>
#include <math.h>

int ispal(int n){
		int rev = 0;
		int temp = n;
		while (temp != 0){
				rev *= 10;
				rev += (temp%10);
				temp /= 10;
		}
		if(rev == n)
		return 1;
		return 0;

}

int main(){

int i,j,hi;
hi = 0;

for (i=0;i<1000;i++){
	for (j=0;j<1000;j++){
		if (ispal(i*j) && i*j>hi)
			hi = i*j;
		}
	}

printf("%d",hi);
return 0;
}