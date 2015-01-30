
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	int arr[20][20];
	int i = 0,k = 0,j= 0,biggest = 0,tmp = 1,tens = 0,ones = 0;
	char str = '0';
	FILE* file = fopen ("2020.txt", "r");
	

	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			fscanf (file, "%c", &str);
			tens = (str - '0');
			fscanf (file, "%c", &str);
			ones = (str - '0');
			fscanf (file, "%c", &str);
			arr[i][j] = ((tens * 10) + ones);
		}
		fscanf (file, "%c", &str);
	}
	fclose(file);
	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			printf ("%02i  ", arr[i][j]);
		}
		printf ("\n");
	}
	printf ("\n ");
	for(i = 0; i < 20; i++){
		for(j = 0; j < 17; j++){
			for(k = 0; k < 4; k++){
			//printf ("%02i  ", arr[i][j+k]);
			tmp *= arr[i][j+k];
		}
	//printf ("%i\n ", tmp);
	if(tmp > biggest){
		biggest = tmp;
	}
	tmp = 1;
	}
	}
	
	for(j = 0; j < 20; j++){
		for(i = 0; i < 17; i++){
			for(k = 0; k < 4; k++){
			//printf ("%02i  ", arr[i+k][j]);
			tmp *= arr[i+k][j];
		}
	//printf ("%i\n ", tmp);
	if(tmp > biggest){
		biggest = tmp;
	}
	tmp = 1;
	}
	}
	
	
	for(j = 0; j < 17; j++){
		for(i = 0; i < 17; i++){
			for(k = 0; k < 4; k++){
			//printf ("%02i  ", arr[i+k][j+k]);
			tmp *= arr[i+k][j+k];
		}
	//printf ("%i\n ", tmp);
	if(tmp > biggest){
		biggest = tmp;
	}
	tmp = 1;
	}
	}
	
	for(j = 3; j < 20; j++){
		for(i = 0; i < 17; i++){
			for(k = 0; k < 4; k++){
			printf ("%02i  ", arr[i+k][j-k]);
			tmp *= arr[i+k][j-k];
		}
	printf ("%i\n ", tmp);
	if(tmp > biggest){
		biggest = tmp;
	}
	tmp = 1;
	}
	}
	printf("%i",biggest);	
	
}