#include <iostream>
using namespace std;
long long int COUNT(unsigned long long int x){
if(x%2==0){
	
	x/=2;//cout<<x<<" ";
	x=((4*x*x*x)+(5*x*x)+(x))/2;
	//cout<<x;
	return x;
}

	x/=2;
	x=(((4*x*x*(x))+(11*((x)*(x)))+(9*x)+2)/2);
	
	return x;
}
int main(int argc, char const *argv[])
{	int t;
	cin>>t;
	while(t--)
	{	
		unsigned long long int a;
		cin>>a;
		cout<<COUNT(a)<<endl;

	}
	return 0;
}