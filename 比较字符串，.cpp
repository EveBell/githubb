#include<stdio.h>
#include<string.h>
int main(void){
	int i,j;
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	int a=(strlen(s1)<strlen(s2)? strlen(s1):strlen(s2));
	int flag=0;
	for(i=0;i<a;i++){
		if(s1[i]!=s2[i])
		{printf("%d\n",s1[i]-s2[i]);
		flag=1;  break;
		}
	}
	if(flag==0)
	printf("0\n");
	return 0;
}
