#include<stdio.h>
void bsort(int x[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>=i;j--){
			  if(x[j-1]>x[j])
				{int temp=x[j];
				x[j]=x[j-1];
				x[j-1]=temp;
			}
		}
	}
} 
int main(void){
	int m,n,j;
	int a[1000],b[1000],c[2000];
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++)
	   scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	   scanf("%d",&b[i]);
	int t=0;int cnt=0;
	//for(int i=m;i<m+n;i++)
	  for(j=0;j<m;j++)
	    {c[j]=a[j];}
	
	if(j==m)
	for(int i=m;i<m+n;i++ )
	    {c[i]=b[t];t++;
		}
	  
	bsort(c,n+m);
	for(int i=0;i<m+n;i++)
	   printf("%d ",c[i]);
	
	return 0;
}
