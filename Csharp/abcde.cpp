#		include<iostream>
using namespace std;
long long int retMod(long long int a,long long int b,long long int c)
{
	return ((a%c)*(b%c))%c;
}
bool checkPrime(long long int x){
	bool flag;
	for(int i=2;i<x;++i){
		if(x%i==0){return flag= false;break;}
		else flag=true;
	}
	if (flag==true)return true;
}
int main()
{int a,o;
	/* code */

	for(int i=2,count=0;count<500500;i++){
		if(checkPrime(i))
			{
				
				count++;
				o=retMod(i,o,500500507);
				cout<<"  "<<o;
			}
	}cout<<o;
	return 0;
}