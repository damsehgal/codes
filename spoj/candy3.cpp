#include <iostream>
#include <cmath>
using namespace std;
bool isint(float x){
	if(ceil(x)==floor(x))return true;
	return false;
}

int main( int argc, char const *argv[])
{
	unsigned long long int t,MAX=18446744073709551615;
	cin>>t;
	while(t--){
		int tt;
		cout<<endl;cin>>tt;
		unsigned long long int a[tt],dummy=tt;float avg=0;
		while(tt>0){
			cin>>a[tt-1];
			a[tt-1]%=MAX;
			avg+=a[tt-1];
			avg=fmod(avg,18446744073709551615.00);
			tt--;
		}avg/=dummy;
		if(isint(avg))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		//unsigned long long int t;

		
	}
	return 0;
}