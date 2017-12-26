#include<stdio.h>
#include<string.h>
int main{
	char *s1=x;
	char *s2=strlen(x);
	char *s3=y;
	char *s4=strlen(y);
	char ch,sh;
	do{
		ch=*s1++;
		*++s3=ch;
		sh=*s2--;
		*--s4=sh;
	}while(*s1+*s2==strlen(x))
}
