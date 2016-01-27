#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
vector<long long int> p,sp,maxP;
bool isPrime(int i){
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}

void max(){int i;
	for( i=0;i<sp.size();i++)
	{
		if(sp[i]>1000000){i--;break;}
	}
	d:
	for(int j=0;i<sp.size();j++){
		if(isPrime(sp[i]-sp[j]))
			{
				cout<<i<<" "<<j<<" "<<sp[i]-sp[j]<<endl;
			}
		
	}i--;goto d;
}
//1 153 777
/*
	2,3,5,7,11,13,....
	-----------------
	2,5,10,17,28,41,...
*/
int main(int argc, char const *argv[])
{	long long int sum=2;
	p.push_back(2);sp.push_back(2);
	for(int i=3;i<40000;i+=2){
		if(isPrime(i)){
			p.push_back(i);
			sum+=i;
			sp.push_back(sum);
		}
	}
	max();
	//cout<<endl<<sum;
	return 0;
}