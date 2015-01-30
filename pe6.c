#include <stdio.h>
#include <math.h>

int main(){
long long num1, num2;
int i;
num1=0;
num2=0;
for (i=0; i < 101 ; i++){
num1 = num1 + (i*i );
num2 += i; 
}
num2 *= num2;
num2 -= num1;
printf ("%lld\n", num2);
}

