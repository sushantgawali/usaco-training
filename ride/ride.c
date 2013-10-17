/*
ID: sushant5
LANG: C
PROG: ride
*/
#include<stdio.h>
int main(){
	
	FILE *fin = fopen("ride.in","r");
	FILE *fout = fopen("ride.out","w");

	char comet[7],group[7];

	fscanf(fin,"%s %s",&comet,&group);

	if(getMod(comet)==getMod(group)){
		fprintf(fout,"%s\n","GO");
	}else{
		fprintf(fout,"%s\n","STAY");
	}
	return 0;

}
/*
	Function to get mod 14 with given string. 
*/
int getMod(char name[7]){
	unsigned int product=1;
	int i=0;
	while(name[i]!='\0'){
		int ch=name[i];
		product=product*(ch-64);
		i++;
	}
	return product%47;
}
