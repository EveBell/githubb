#include<stdio.h>
int main(void){
	int n;
	int num;
	scanf("%d",&n);
	int x[200];
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	scanf("%d",&num);
	int flag=0;
	for(int i=0;i<n;i++){
		if(x[i]==num)
		{printf("%d ",i);flag=1;
		}
	}
	if(flag==0)
	  printf("-1");
	return 0;
}
