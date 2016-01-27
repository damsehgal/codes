#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t!=0){
		cout<<fixed<<setprecision(2)<<double((t*t)/(2*3.1415926))<<"\n";
		cin>>t;
	}
	return 0;
}