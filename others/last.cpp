#include <bits/stdc++.h>
using namespace std;

std::vector<long long> v;
long long RETMOD(long long base, long long exp, long long modulus) {
  if(exp==0)return 1;
  base %= modulus;
  long long result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
int checkLength(long long x){
	if(x==0)return 1;
	int count=0;
	while(x){
		count++;
		x/=10;
	}
	return count;
}
long long INTMOD(long long x){
	long long ans=0,i=1;
	while(x){
		ans+=((x%10)*i)%1000000007;
		i*=10;
		x/=10;
	}
	ans%=1000000007;

	return ans;
}
long long ANSMOD(long long x,int count){
	long long ans=(INTMOD(x)*RETMOD(10,count,1000000007))%1000000007;
	return ans%1000000007;
}
void change(long long b,long long c){
	b--;
	v[b]=c;
}
void print(long long b,long long c){
	b--;c--;
	//cout<<"AALO";
	long long ans=0;
	int count=0;
	for(long long i=c;i>=b;i--){
		if(v[i]!=0)ans+=ANSMOD(v[i],count);


		//cout<<ans<<";\n";
		count+=checkLength(v[i]);
	}
	cout<<ans%1000000007;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		long long alpha; 
		cin>>alpha;
		v.push_back(alpha);
	}
	int q;
	cin>>q;
	while(q--){
		long long  a,b,c;
		cin>>a>>b>>c;
		if(a==0){
			print(b,c);
		}
		else {
			change(b,c);
		}
	}
	
	 //long long abc=1234567891;
	//cout<<ANSMOD(5,0);
	//cout<<abc%1000000007<<"\n";
	// cout<<ANSMOD(abc,1);
	return 0;
}