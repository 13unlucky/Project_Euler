#include <stdio.h>
#include <math.h>
#include <float.h>



int main(){

	int i, j, k,isHere,count;
	long long n;
	long long *arr;

	count = 1;
	isHere = 0;
	
	arr = calloc(arr,sizeof(long long)*(count));
	for(i=2;i<=100;i++){
		for(j=2;j<=100;j++){
			n = pow((double)i,(double)j);
			for(k=0;k<count;k++){
				if(arr[k] == n){
					isHere = 1;
					break;
				}
			}	
			if(!isHere){
				count ++;
				printf("%d ^ %d = %lld\n",i,j,n);
				arr = realloc(arr,sizeof(long long)*(count));
				arr[count-1] = n;
			}
			isHere = 0;
		}
	}

	
	free(arr);
	printf("%d",count);

	return 0;
}