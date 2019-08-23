#include <stdio.h>
//Daniela Arias

main()
{
int c;

while ((c=getchar())!= EOF){
if(c=='\t'){
	printf("\\t");
	}
if(c=='\b'){
	printf("\\b");
	}
if(c=='\\'){
	printf("\\\\");
	}
else{
	putchar(c);
	}

}

}
