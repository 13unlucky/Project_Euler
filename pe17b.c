#include <stdio.h>
#include <math.h>
#include <float.h>
int main(){

	int i,j,k,tot;
 
	for(i=0; i<=9; i++){
		for(j=0; j<=9; j++){
			for(k=0; k<=9; k++){
				if (i == 1 && (j != 0 || k != 0)){ tot += 13; printf("one hundred and ");}
				if (i == 2 && (j != 0 || k != 0)){ tot += 13; printf("two hundred and ");}
				if (i == 3 && (j != 0 || k != 0)){ tot += 14; printf("three hundred and ");}
				if (i == 4 && (j != 0 || k != 0)){ tot += 14; printf("four hundred and ");}
				if (i == 5 && (j != 0 || k != 0)){ tot += 14; printf("five hundred and ");}
				if (i == 6 && (j != 0 || k != 0)){ tot += 13; printf("six hundred and ");}
				if (i == 7 && (j != 0 || k != 0)){ tot += 15; printf("seven hundred and ");}
				if (i == 8 && (j != 0 || k != 0)){ tot += 15; printf("eight hundred and ");}
				if (i == 9 && (j != 0 || k != 0)){ tot += 14; printf("nine hundred and ");}
				
				if (i == 1 && j == 0 && k == 0){ tot += 10; printf("one hundred");}
				if (i == 2 && j == 0 && k == 0){ tot += 10; printf("two hundred");}
				if (i == 3 && j == 0 && k == 0){ tot += 11; printf("three hundred");}
				if (i == 4 && j == 0 && k == 0){ tot += 11; printf("four hundred");}
				if (i == 5 && j == 0 && k == 0){ tot += 11; printf("five hundred");}
				if (i == 6 && j == 0 && k == 0){ tot += 10; printf("six hundred");}
				if (i == 7 && j == 0 && k == 0){ tot += 12; printf("seven hundred");}
				if (i == 8 && j == 0 && k == 0){ tot += 12; printf("eight hundred");}
				if (i == 9 && j == 0 && k == 0){ tot += 11; printf("nine hundred");}
				
				if (j == 1 && k == 0){ tot += 3; printf("ten\n");}
				if (j == 1 && k == 1){ tot += 6; printf("eleven\n");}
				if (j == 1 && k == 2){ tot += 6; printf("twelve\n");}
				if (j == 1 && k == 3){ tot += 8; printf("thirteen\n");}
				if (j == 1 && k == 4){ tot += 8; printf("fourteen\n");}
				if (j == 1 && k == 5){ tot += 7; printf("fifteen\n");}
				if (j == 1 && k == 6){ tot += 7; printf("sixteen\n");}
				if (j == 1 && k == 7){ tot += 9; printf("seventeen\n");}
				if (j == 1 && k == 8){ tot += 8; printf("eighteen\n");}
				if (j == 1 && k == 9){ tot += 8; printf("nineteen\n");}
				if (j == 2){ tot += 6; printf("twenty ");}
				if (j == 3){ tot += 6; printf("thirty ");}
				if (j == 4){ tot += 5; printf("forty ");}
				if (j == 5){ tot += 5; printf("fifty ");}
				if (j == 6){ tot += 5; printf("sixty ");}
				if (j == 7){ tot += 6; printf("seventy ");}
				if (j == 8){ tot += 6; printf("eighty ");}
				if (j == 9){ tot += 6; printf("ninety ");}
				if (j != 1 && k == 0){ tot += 3; printf("\n");}
				if (j != 1 && k == 1){ tot += 3; printf("one\n");}
				if (j != 1 && k == 2){ tot += 3; printf("two\n");}
				if (j != 1 && k == 3){ tot += 5; printf("three\n");}
				if (j != 1 && k == 4){ tot += 4; printf("four\n");}
				if (j != 1 && k == 5){ tot += 4; printf("five\n");}
				if (j != 1 && k == 6){ tot += 3; printf("six\n");}
				if (j != 1 && k == 7){ tot += 5; printf("seven\n");}
				if (j != 1 && k == 8){ tot += 5; printf("eight\n");}
				if (j != 1 && k == 9){ tot += 4; printf("nine\n");}
			}		
		}
	}
	tot += 11;
	printf("one thousand\n");
	printf("%i",tot);

	return 0;
}