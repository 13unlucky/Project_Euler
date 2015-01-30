#include <stdio.h>
#include <math.h>

int main(){

	int arr[100][100];
	int hi = 0;
	int i,j;
	char str = '0';
	
	FILE* file = fopen ("pe18tri.txt", "r");
	
	for(j=0;j<100;j++){
		for(i=0;i<=j;i++){
			fscanf (file, "%d", &arr[j][i]);
		}
	}
	
	for(j=0;j<100;j++){
		for(i=0;i<=j;i++){

			printf("%i ", arr[j][i]);
		}
		printf("\n");
	}
	
	for(j=1;j<100;j++){
		for(i=0;i<=j;i++){
			if (i == 0){
				arr[j][i] = arr[j][i] + arr[j-1][i];
			}else if (i == j){
				arr[j][j] = arr[j][j] + arr[j-1][j-1];
			}else{
				if((arr[j][i] + arr[j-1][i]) > (arr[j][i] + arr[j-1][i-1]))
					arr[j][i] = (arr[j][i] + arr[j-1][i]);
				else
					arr[j][i] = (arr[j][i] + arr[j-1][i-1]);
			}
		}

	}
	printf("\n");
	printf("\n");
	
	for(j=0;j<100;j++){
		for(i=0;i<=j;i++){

			printf("%i ", arr[j][i]);
		}
		printf("\n");
	}
	
	
	for(j=0;j<100;j++){
		printf("%i ", arr[99][j]);
		if(hi < arr[99][j])
			hi = arr[99][j];
	}
	
	printf("%i", hi);
	
}

