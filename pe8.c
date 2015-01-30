
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	int *big ;
	int i = 0,j= 0,biggest = 0,tmp = 1;
	big = malloc(sizeof(int)*1000);
	FILE* file = fopen ("bignum", "r");
	char str;

	for(i = 0; i < 1000; i++){
		fscanf (file, "%c", &str);
		big[i] = (str - '0');
	}
	fclose(file);
	for(i = 0; i < 996; i++){
		for(j = 0; j <=4; j++){

			tmp *= big[i + j];
		}

	if(tmp > biggest){
		biggest = tmp;
	}
	tmp = 1;
	}
	printf("%i",biggest);	
	
}