#include<stdio.h>
int main(void){
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	if(m!=q||n!=p){
		printf("error\n");
	    return 0;
	}
	int a[100][100],b[100][100];
	int i,j,c;
	for(i=1;i<=m;i++)
	  for(j=1;j<=n;j++){
	  	scanf("%d",&a[i][j]);}
	  	
	for(i=1;i<=p;i++)
	  for(j=1;j<=q;j++){
	  	scanf("%d",&b[i][j]);
	  }  	
		
	for(int i=1;i<=m;i++){
		
		for(int k=1;k<=q;k++){
		    c=0;
			for(int j=1;j<=n;j++){
			     
				 c +=a[i][j]*b[j][k];
		        }printf("%d ",c);
		}printf("\n");
	}  	
	  	
		
//	return 0;	
	  }
