#include <stdio.h>
//Daniela Arias
main()
{
int blanks=0,tabs=0,nlines=0,c=0;
while ((c=getchar())!= EOF){
if(c==' '){
	blanks++;
	}
if(c=='\t'){
	tabs++;
	}
if(c=='\n'){
	nlines++;
	}
}
printf("\nblanks %d\ntabs %d\nnew lines %d\n",blanks,tabs,nlines);
}
