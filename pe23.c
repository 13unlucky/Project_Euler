#include <stdio.h>
#include <math.h>


int isAb(int n){
	int ab = 0;
	int i;
	
	for(i=1;i<n;i++){
		if(n%i == 0)
			ab += i;

		}

	if(ab > n)
		return 1;
	return 0;

}


int main(){
	int arr[6966];
	int tbr[28125];
	int count = 0;
	int i,j,sum;
	
	for(i=1;i<2966;i++)
		arr[i] = 0;
	
	for(i=1;i<=28124;i++){
		tbr[i] = 1;
		if (isAb(i)){
			arr[count] = i;
			printf("%d\n",i);
			count ++;
		}
	}

	
	for(i=0; i<=6966; i++){
		for(j=0; j<=6966; j++){
			if(arr[i] + arr[j] <= 28126){
				tbr[arr[i] + arr[j]] = 0;
			}else{
				break;
			}
		}
	}	
	
	for(i=0; i<=28123; i++)
		if(tbr[i]){
			printf("%d\n",i);
			sum += i;
		}
	printf("    %d",sum);

}