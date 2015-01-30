
#include <stdio.h>
#include <math.h>

int main(){
long long num;
int done,i;
num = 2;
done = 0;

while(done != 1){

done=1;
printf ("%lld\n", num);
for (i = 0;i<=20;i++){

if (fmod (num,i) != 0)
done = 0;

}
if (done==1){
printf("%lld\n",num);
}
num++;
}

return 0;
}