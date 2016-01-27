#include <iostream>
#include <cmath>
using namespace std;
/*
A=a+2b
B=a+(n-3)b
(B-A)/(n-5)

*/
void f(long long int a,long long int b,long long int c){
	int n=2*(c/(a+b));
	int D=((n-5)/(b-a));
	int A=a-(2*D);
	for(int i=0;i<n;i++){
		cout<<A+(i*D)<<" ";
	}cout<<endl;
}
int main(int argc, char const *argv[])
{
	int t;cin>>t;
	while(t--){
		long long int a,b,c;
		cin>>a>>b>>c;
		f(a,b,c);
	}
	return 0;
}