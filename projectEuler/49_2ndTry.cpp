#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
std::vector<int> v1,v2;
bool isPermutation(int x,int y){
v1.clear();v2.clear();
long long int a=0,b=x,c=y;
	while(b!=0){
		v1.push_back(b%10);
		v2.push_back(c%10);
		b/=10;c/=10;
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	for(int i=0;i<v1.size();i++){
		if(v1[i]!=v2[i])return false;

	}return true;
}
bool isPrime(int i){
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}
void CONSTANT(int x){
	
	for(int i=1;i<9999;i++){
		if(isPrime(i+x) && isPrime(i+i+x)){
			if(isPermutation(x,i+x) && isPermutation(x,i+i+x))cout<<x<<" "<<i+x<<" "<<i+i+x;
		}
	}
}

int main(int argc, char const *argv[])
	{	
		for(int i=1000;i<9999;i++){
			if(isPrime(i))CONSTANT(i);
		}

		return 0;
	}	