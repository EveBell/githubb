#include<stdio.h>
#include<string.h>
int main(){
	char a[200];
	char b[100];
	
	int i,n;
	gets(a);
	gets(b);
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		a[n]=33;
		a[n+i+1]=b[i];    //空格自己打吧233 
	}
	printf("%s",a);
	
	return 0;
}
