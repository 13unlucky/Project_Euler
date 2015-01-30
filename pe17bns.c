#include<stdio.h>
#include<math.h>
#include<float.h>
int main(){

	int i,j,k,tot;

	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				if(i==1&&(j!=0||k!=0)){tot+=13;printf("onehundredand");}
				if(i==2&&(j!=0||k!=0)){tot+=13;printf("twohundredand");}
				if(i==3&&(j!=0||k!=0)){tot+=14;printf("threehundredand");}
				if(i==4&&(j!=0||k!=0)){tot+=14;printf("fourhundredand");}
				if(i==5&&(j!=0||k!=0)){tot+=14;printf("fivehundredand");}
				if(i==6&&(j!=0||k!=0)){tot+=13;printf("sixhundredand");}
				if(i==7&&(j!=0||k!=0)){tot+=15;printf("sevenhundredand");}
				if(i==8&&(j!=0||k!=0)){tot+=15;printf("eighthundredand");}
				if(i==9&&(j!=0||k!=0)){tot+=14;printf("ninehundredand");}
				
				if(i==1&&j==0&&k==0){tot+=10;printf("onehundred");}
				if(i==2&&j==0&&k==0){tot+=10;printf("twohundred");}
				if(i==3&&j==0&&k==0){tot+=11;printf("threehundred");}
				if(i==4&&j==0&&k==0){tot+=11;printf("fourhundred");}
				if(i==5&&j==0&&k==0){tot+=11;printf("fivehundred");}
				if(i==6&&j==0&&k==0){tot+=10;printf("sixhundred");}
				if(i==7&&j==0&&k==0){tot+=12;printf("sevenhundred");}
				if(i==8&&j==0&&k==0){tot+=12;printf("eighthundred");}
				if(i==9&&j==0&&k==0){tot+=11;printf("ninehundred");}
				
				if(j==1&&k==0){tot+=3;printf("ten");}
				if(j==1&&k==1){tot+=6;printf("eleven");}
				if(j==1&&k==2){tot+=6;printf("twelve");}
				if(j==1&&k==3){tot+=8;printf("thirteen");}
				if(j==1&&k==4){tot+=8;printf("fourteen");}
				if(j==1&&k==5){tot+=7;printf("fifteen");}
				if(j==1&&k==6){tot+=7;printf("sixteen");}
				if(j==1&&k==7){tot+=9;printf("seventeen");}
				if(j==1&&k==8){tot+=8;printf("eighteen");}
				if(j==1&&k==9){tot+=8;printf("nineteen");}
				if(j==2){tot+=6;printf("twenty");}
				if(j==3){tot+=6;printf("thirty");}
				if(j==4){tot+=5;printf("forty");}
				if(j==5){tot+=5;printf("fifty");}
				if(j==6){tot+=5;printf("sixty");}
				if(j==7){tot+=6;printf("seventy");}
				if(j==8){tot+=6;printf("eighty");}
				if(j==9){tot+=6;printf("ninety");}
				if(j!=1&&k==0){tot+=3;printf("");}
				if(j!=1&&k==1){tot+=3;printf("one");}
				if(j!=1&&k==2){tot+=3;printf("two");}
				if(j!=1&&k==3){tot+=5;printf("three");}
				if(j!=1&&k==4){tot+=4;printf("four");}
				if(j!=1&&k==5){tot+=4;printf("five");}
				if(j!=1&&k==6){tot+=3;printf("six");}
				if(j!=1&&k==7){tot+=5;printf("seven");}
				if(j!=1&&k==8){tot+=5;printf("eight");}
				if(j!=1&&k==9){tot+=4;printf("nine");}
			}		
		}
	}
	tot+=11;
	printf("onethousand");
	printf("%i",tot);

	return 0;
}