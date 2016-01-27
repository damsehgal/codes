#include<stdio.h>
//using namespace std;
 
double f[111][111][111];
 
int n,m,l;
 
int main(){
	scanf("%d%d%d",&n,&m,&l);
	f[n][m][l]=1;
	for (int i=n;i>=0;i--){
		for (int j=m;j>=0;j--){
			for (int k=l;k>=0;k--){
				if ((i+1)*j+j*k+k*(i+1))
					f[i][j][k]+=f[i+1][j][k]*(i+1)*k/((i+1)*j+j*k+k*(i+1));
				else
					f[i][j][k]+=f[i+1][j][k];
					
				if (i*(j+1)+(j+1)*k+k*i)
					f[i][j][k]+=f[i][j+1][k]*i*(j+1)/(i*(j+1)+(j+1)*k+k*i);
				else
					f[i][j][k]+=f[i][j+1][k];
					
				if (i*j+j*(k+1)+(k+1)*i)
					f[i][j][k]+=f[i][j][k+1]*j*(k+1)/(i*j+j*(k+1)+(k+1)*i);
				else
					f[i][j][k]+=f[i][j][k+1];
			}
		}
	}
	printf("%.12f %.12f %.12f\n",f[1][0][0],f[0][1][0],f[0][0][1]);
	return 0;
}