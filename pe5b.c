#include <stdio.h>
#include <math.h>

int main(){
double num;
int tmp1, tmp2,i;
num = 6;
for (i = 4; i < 21 ; i++){
tmp1 = num;
tmp2 = i; 

while (tmp1!=tmp2){
if (tmp1> tmp2)
tmp1-=tmp2;
else
tmp2-=tmp1;
}
num *= i; 
num /= tmp1;

}
printf("%f\n", num);
}