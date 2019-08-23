#include <stdio.h>
//Daniela Arias
#define TABINC 8 //tab increment size

main(){
int c,numBlanks=0,position=1;

while ((c=getchar()) != EOF){
	if (c=='\t'){
		numBlanks= TABINC -(position -1)%TABINC;
		while (numBlanks> 0){
			putchar(' ');
			++position;
			--numBlanks;
			}
		}
	else if(c=='\n'){
		putchar(c);
		position=1;
		}
	else{
		putchar(c);
		position++;
		}
	}
}
		


