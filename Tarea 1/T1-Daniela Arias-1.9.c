#include <stdio.h>
//Daniela Arias
#define NONBLANK 'a'
main()
{
int c, anterior;
anterior=NONBLANK;
while ((c=getchar())!= EOF){
if(c!=' '){
	putchar(c);
	}
if(c==' '){
	
	
	if(anterior!=' '){
		putchar(c);
	}
}
anterior=c;
}

}
