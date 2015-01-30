#include <stdio.h>
#include <math.h>
#include <float.h>
int main(){
	/*
	one   3
	two   3
	three 5
	four  4
	five  4
	six   3
	seven 5
	eight 5
	nine  4
	
	ten   3
	
	eleven 6
	twelve 6
	thirteen 8
	fourteen 8
	fifteen  7
	sixteen  7
	seventeen 9
	eighteen  8
	nineteen 8
	
	twenty   6
	thirty   6
	forty   5
	fifty  5
	sixty  5 
	seventy 6
	eighty   6
	ninety   6
	
	hundred   7 
	
	and      3
	
	
	
	*/
	int oneTOnine = (3+3+5+4+4+3+5+5+4);
	int teeeeens = (3+6+6+8+8+7+7+9+8+8);
	int tens = (6+6+5+5+5+6+6+6);
	int oneTOhun = teeeeens+(10*tens)+(9*oneTOnine);
	int tot = oneTOhun + 9*oneTOhun  + (10*899) + (oneTOnine*100)  + 11 + (7*9) +oneTOnine ;
	printf("%i",tot);
	return 0;
}