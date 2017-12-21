#include<stdio.h>
void null_string(char s[])
{
	int i=0;
	if(s[i])
	  {s[i]='\0';i++;
	  }
 } 
int main(){
	char s[]="ABC";
	printf("%s\n",s);
	printf("¥¶¿Ì∫Û£∫");
	
	null_string(s);
	printf("%s",s);
}
