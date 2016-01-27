#include<stdio.h>
int SUM(int n){
	int sum=0;
	int i,x=n;
	if(n==1)return 1;
	if(n==2)return 1;
	for( i=2;(i*i)<n;i++){
		if(n%i==0){sum+=i+(n/i);
			
		}
	}if(x%(i*i)==0)sum+=i;	
	return sum+1;
} 
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		printf("%d\n",SUM(a));
	}
	return 0;
}