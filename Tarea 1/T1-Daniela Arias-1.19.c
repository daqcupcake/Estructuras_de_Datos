#include <stdio.h>
//Daniela Arias
#define MAXLINE 1000

int getlines(char line[],int maxline);
void reverse(char s[]);


main(){
char line[MAXLINE];

while (getlines(line,MAXLINE) > 0){
	reverse(line);
	printf("%s",line);
	}
}


void reverse(char s[]){
int i=0,j=0;
char ph;

while(s[i]!='\0'){
	i++; //find the end
}

--i;
if(s[i]=='/n')
	i--;

while (j<i){
ph=s[j];
s[j]=s[i];
s[i]=ph;
i--;
j++;
}
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
	
