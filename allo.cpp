#include <bits/stdc++.h>
using namespace std;
/*long long aalo(long long n,long long m){
	return 0;
}*/

bool isPrime(long long x){
	if(x==2)return true;
	for(int i=3;i*i <=x;i++){
		if(x%i==0)
			return false;
	}
	return true;
}
bool factor(long long x,int& v2,int& v3,int& v5,int& v7){
	int count=0;
	while(x%2==0){
		v2++;
		x/=2;
	}
	
	while(x%3==0){x/=3;v3++;}
	while(x%5==0){x/=5;v5++;}
	while(x%7==0){x/=7;v7++;}
	if(x==1)return true;
	return false;
}
int main(int argc, char const *argv[])
{
	int t;

	cin>>t;
	while(t--){
        
		long long x;
		cin>>x;
        
		int v2=0;
		int v3=0;
		int v5=0;
		int v7=0;
		std::vector<int> v;
		if((x/10)==0){cout<<"x\n";goto lm;}
        if(x==0){cout<<"0\n";goto lm;}
		//else if(isPrime(x)){cout<<"NOT POSSIBLE\n";goto lm;}
		
		if(!factor(x,v2,v3,v5,v7)){cout<<"NOT POSSIBLE\n";goto lm;}
		else{
				int c1=v2/3;
				int c2=v2%3;
				int c3=v3/2;
				int c4=v3%2;
				if(c2==1 && c4==1)
					v.push_back(6);
				else if(c4==1)
					v.push_back(3);
				else if(c2==1)
					v.push_back(2);
				if(c2==2)
					v.push_back(4);
				for(int i=0;i<c1;i++)
					v.push_back(8);
				for(int i=0;i<c3;i++)
					v.push_back(9);
				for(int i=0;i<v5;i++)
					v.push_back(5);
				for(int i=0;i<v7;i++)
					v.push_back(7);
				sort(v.begin(), v.end());
				for(int i=0;i<v.size();i++)
					cout<<v[i];
				cout<<"\n";
			}

		lm: ;
		}
	
	return 0;
}