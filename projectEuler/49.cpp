#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
int Next(long long int x){
	v.clear();
	long long int a=0,b=x;
	while(b!=0){
		v.push_back(b%10);
		b/=10;
	}reverse(v.begin(),v.end());


	int i=v.size()-1;
	while(i>0 && v[i-1]>=v[i])i--;
	if(i<=0)return 0;
	int j=v.size()-1;
	while(v[j]<=v[i-1])j--;
	v[j]^=v[i-1];
	v[i-1]^=v[j];
	v[j]^=v[i-1];
	while(i<j){
		v[j]^=v[i];
		v[i]^=v[j];
		v[j]^=v[i];
		i++;
		j--;
	}
	for (int i = pow(10,v.size()-1),j=0; j < v.size(); i/=10,j++)
	{
		a+=(v[j]*i);
		//returns reverse of numbers
	}
	return a;
}
//10234->102
//1234->1243//chose the largest non decreasing sequence
int isPrime(int i){
	if(i==2||i==3)return 1;
	if(!(i&1))return 0;
	if(!(i%6==1||i%6==5))return 0;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return 0;
	}
	return 1;
}
bool check(int x){
	int count=0;
		d:
		count+=isPrime(x);
		x=Next(x);//cout<<x<<" ";
		if(x!=0)goto d;

		//cout<<x<<" "<<count<<endl;
	
	if (count>=3)return true;
	return false;
}
bool contains(int x){
	int b=x;
	bool a[10];for (int i = 0; i < 10; ++i)a[i]=false;
	while(b!=0){
		if(a[b%10])return false;
		a[b%10]=true;
		b/=10;
	}
	return true;
}
bool ANOTHER(int x){
	if(isPrime(x+3330) && isPrime(x+6660))return true;
	return false;
}
// WE NEED TO FIND EQUIDISTANT NUMBERS WHICH ARE PERMUTATIONS OF EACH OTHER 
// AND CHECK IF THEY ARE PRIME
bool isPermutation(int x,int y){
	//CHECKS IF Y IS PERMUATION OF X
	//if((x==1487) && (y==(1487+6660)))cout<<"DE";
		de:
		//if(y==Next(x))return true;
		x=Next(x);	cout<<x<<" ";//<<y<<endl;
		if(x!=0)goto de;	
	return false;
}
void CONSTANT(int x){
	for(int i=1;i<9999;i++){if(i==3330)cout<<"NO";
		if(isPermutation(x,i+x) && isPermutation(x,i+i+x)){cout<<"YES";
			if(isPrime(x) && isPrime(i+x) && isPrime(i+i+x)){
				cout<<x<<" "<<i+x<<" "<<i+i+x;
				//return true;
			}//return fals
		}//return false;
	
	}
}

int main(int argc, char const *argv[])
{
	/*for(int i=1000;i<9999;i++)
	{
		CONSTANT(i);
	}*/
		cout<<isPermutation(1487,1487+3330);
	return 0;
}