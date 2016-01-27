#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(unsigned long long int i){
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(unsigned long long int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}
void factor(unsigned long long int x){
	unsigned long long int y=x;
	if(x==1)return;
	if(isPrime(x)){cout<<x<<"^1";return;}
	for(unsigned long long int i=2;i<y;){
		int count1=0;
		
		if(x%i==0){while(x%i==0){
			
			x/=i;
			count1++;
		}cout<<i<<"^"<<count1<<" ";
			return factor(x);
		}
		
		if(i==2)i=3;
		else i+=2;
	}


}
int main(int argc, char const *argv[])
{
	
	unsigned long long int x;
	cin>>x;
	while(x!=0){
		
		factor(x);
		cout<<"\n";
		cin>>x;
	}

	return 0;
}