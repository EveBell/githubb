#include<stdio.h>
#include<string.h>
#define N 5
int main(void){
	int i;
	char s[N][128];
	char a[]="$$$$$";
	
	for(i=0;i<N;i++){
		printf("s[%d]:",i);
		scanf("%s",s[i]);
		}
		
	
	for(int j=0;j<N;j++)
	  {int b=strcmp(a,s[j]);
	   if(b==0)	break;
	  printf("s[%d]=\"%s\"\n",j,s[j]);
	  }
		
	  
	  
	return 0;
}
