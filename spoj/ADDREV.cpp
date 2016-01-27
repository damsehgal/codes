#include <iostream>
using namespace std;
long long int REV(long long int x){
	long long int sum=0;
	while(x!=0){
		sum=sum*10+x%10;
		x/=10;
	}

	return sum;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int x,y;
		cin>>x>>y;
		cout<<REV(REV(x)+REV(y))<<endl;
	}
	return 0;
}


