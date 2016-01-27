#include <iostream>
using namespace std;
int retmod(unsigned long long int a,unsigned long long int b,int c){
	if(b==0)return 1;
	else if(b==1)return a%c;
	else if(b%2==0)return retmod((a*a)%c,b/2,c);
	else return (a*retmod((a*a)%c,b/2,c))%c;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		unsigned long long int a,b;
		cin>>a>>b;
		cout<<retmod(a,b,10)<<endl;
	}
	return 0;
}//can he pay all deonitations till sum if he haas only 1 of each kind
