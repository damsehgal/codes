#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double ANS(double n,double k,double m){
	double dummy=(double)(m/n);
	double dummy2=log(k);
	dummy=log(dummy);
	return floor(dummy/dummy2);
}
//note that m<10^18
void ABC2(double n,double k,double m){
	for(double i=0;i<=k;i++){
		if((n*(pow(k,i)))>=m){
			
			if((n*(pow(k,i)))==m)cout<<fixed<<setprecision(0)<<i<<"\n";
			else cout<<fixed<<setprecision(0)<<i-1<<"\n";
			break;
		}
		
	}
}
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int p;
	cin>>p;
	while(p--){
		double n,k,m;
		cin>>n>>k>>m;
		ABC2(n,k,m);
	}
	return 0;
}