#include <stdio.h>
//Daniela Arias
#define MAXLINE 1000//maximun input line size
#define LONGLINE 80

int getlines(char line[], int maxline)
{
int c, i;

for (i=0; i < maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
line[i] = c;
if (c == '\n') {
line[i] = c;
++i;
}
line[i] = '\0';
return i;
}
main(){
int len; //curent line length
char line[MAXLINE]; //current input line

while ((len=getlines(line,MAXLINE))>0){
	if (len> LONGLINE){
		printf("%s",line);
		}
	}
return 0;
}

