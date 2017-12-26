#include<stdio.h>
#include<string.h>
void StrCat(char x[],char y[]){
	int i,n;
	n=strlen(x);
	x[n]=32;
	for(i=0;i<strlen(y);i++){
		x[n+i+1]=y[i];
	}
	
} 
int main(void){
	char cTarget[80]="Hello";
	char cSource[40]="World!";
	StrCat(cTarget,cSource);
	printf("%s\n",cTarget);
	return 0;
} 
