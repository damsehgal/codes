#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> va;
vector<int> vb;
vector<int> vCount;


bool isPrime(int i){
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}


int main(int argc, char const *argv[])
{
	//b is prime and 1+a+b is prime and 4+2a+b is prime to reduce solution space 
	for(int b=2;b<1000 ;b++){if(isPrime(b)){
		for(int a=-1000;a<1000;a++){
			if(((a+b+1)>0) && isPrime(a+b+1) && isPrime(b+(2*a)+4)){
				int n=3;
				while(isPrime((n*n)+(n*a)+b))n++;
				va.push_back(a);vb.push_back(b);vCount.push_back(n);

				}
			}
		}
	}
	//now search maximum
	int lm=0,mn;
	for(int i=0;i<vCount.size();i++){
		if(vCount[i]>lm){lm=vCount[i];mn=i;}
	}
	cout<<va[mn]*vb[mn];
	return 0;
}