#include<stdio.h>
void swapByPointer(int *A,int *B){
	int p=*A;
	*A=*B;
	*B=p;
}
int main(void){
	int m,n;
	scanf("%d %d",&m,&n);
	swapByPointer(&m,&n);
	printf("%d %d",m,n);
}
