#include<stdio.h>
int main(){
	int x;
	int flag=0;
	scanf("%d",&x);
	if(x>=0&&x<=200){
		if(x%2==0)
		  flag=1;
	}
	if(flag==1)
	  printf("ÊÇ");
	else
	  printf("²»ÊÇ");
	  
	return 0;
}
