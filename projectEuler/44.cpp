//refer to 41.cpp for isPandigital
// gives wrong answer bcoz sqrt is not precise ->see 45.cpp
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
long long int p[10000];
/*long long int Create(long long int x)
{long long int lm=x;
	if(p[x]==0)return p[x]=Create(x-1)+(((5*lm)-1)/2);
	else return p[x];
}*/
bool check(long long int m){
	long long int x=((24*m)+1);//cout<<x<<" ";
	float y=sqrt(x);
	if((floor(y))!=y)return false;
	int y2=(int)y;//cout<<y2<<" "<<y;
	if((y2%6)!=5)return false;
	return true;
}
int main(int argc, char const *argv[])
{	long long int dif=10000000;
	for(int i=0;i<10000;i++){p[i]=((i)*((3*i)-1))/2;}
	
	for(int i=1;i<10000;i++){
		for(int j=i+1;j<10000;j++){
			if(check(p[i]+p[j]) && check(p[j]-p[i]))
				{if(dif>(p[j]-p[i])){dif=p[j]-p[i];	cout<<i<<" "<<j<<" "<<dif<<endl;}}

		}
	}
		//if(check(22))cout<<"yes";
			
}