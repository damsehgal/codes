#include <iostream>
using namespace std;
long long int GCD(long long int x,long long int y){
	if(y==0)return x;
	return GCD(y,x%y);
}
long long int ANS(long long int x,long long int y){
	long long int d=GCD(x,y);
	return((x*y)/(d*d));
}
int main(int argc, char const *argv[])
{
	long long int x,y;
	cin>>x>>y;
	while(!((x==0) &&(y==0))){
		cout<<ANS(x,y)<<"\n";
		cin>>x>>y;
	}
	return 0;
}