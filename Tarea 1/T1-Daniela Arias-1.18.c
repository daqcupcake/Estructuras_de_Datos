#include <stdio.h>
//Daniela Arias
#define MAXLINE 1000 

int getines(char line[],int maxline);
int removes(char s[]);

main(){
char line[MAXLINE];
while((getlines(line,MAXLINE))>0)
	if(removes(line)>0){
		printf("%s",line);
		
	}
return 0;
}	


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

int removes(char s[]){
int i=0;
while(i>=0 && (s[i]==' '||s[i]=='\t'))
++i;
if(i>=0){
++i;
s[i]='\n';
++i;
s[i]='\0';
}
return 1;

}
