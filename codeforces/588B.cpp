#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long int x){
	if(x<2)return false;
	if(x==2||x==3)return true;
	if(!((x%6==1)||(x%6==5)))return false;
	
	for(int i=5;(i*i)<=x;i+=2)
		if(x%i==0)return false;
	
	return true;
}
long long int ans(long long int x){

	//if(isPrime(x)){cout<<x;return;}
	if(x==1){return 1;}
		long long int km=x,pro=1;
		// // std::vector<int> v;
		// for(long long int i=2;;){
		// 	if(x%i==0){
		// 		while(x%i==0)
		// 			x/=i;
		// 		pro*=i;
		// 	}
		// 	if(i==2)i=3;
		// 	else i+=2;
			
		// 	if(x==1)break;
		// }

		//if(pro==1)cout<<x;
		//else cout<<pro;
		for(long long int i=(long long int)(sqrt(x));i>=2;i--){
			if(x%(i*i)==0){x/=i;x=ans(x);}
		}return x;
		
	
} 
int main(int argc, char const *argv[])
{	
	
	long long int a;
	cin>>a;
	cout<<ans(a);
	return 0;
}