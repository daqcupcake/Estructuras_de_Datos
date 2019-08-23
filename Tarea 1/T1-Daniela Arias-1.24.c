#include <stdio.h>

int corchete,cuadrado,redondo;

void inQuote(int c);
void inComment(void);
void search(int c);

main(){
	int c;
	extern int corchete,cuadrado,redondo;
	
while((c=getchar())!= EOF){
if(c=='/'){
	if((c=getchar())=='*'){
		inComment();
	}else
		search(c);
}
else if (c=='\'' || c=='"')
	inQuote(c);
else
	search(c);
}

if (corchete != 0){
	printf("Corchetes desbalanceados\n");
	corchete=0;
	}
if (cuadrado != 0){
	printf("Cuadrados desbalanceados\n");
	cuadrado=0;
	}
if (redondo != 0){
	printf("Redondo desbalanceados\n");
	redondo=0;
	}
}

void search(int c){
extern int corchete,cuadrado,redondo;
if (c=='{')
	corchete++;
else if (c=='}')
	corchete--;
else if (c=='[')
	cuadrado++;
else if (c==']')
	cuadrado--;
else if (c=='(')
	redondo++;
else if (c==')')
	redondo--;
}

void inComment(void){
int a,b;
a=getchar();
b=getchar();
while (a != '*' || b!='/'){
	a=b;
	b=getchar();
}
}

void inQuote(int c){
int d;
while ((d=getchar())!= c)
	if(d=='\\')
		getchar();
}
