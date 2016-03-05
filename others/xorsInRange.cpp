#include <bits/stdc++.h>
using namespace std;
long long f(long long a) {
     long long res[] = {a,1,a+1,0};
     return res[a%4];
}

long long getXor(long long a, long long b) {
     if(i==1)
     return f(b)^f(a-1);
}
int main(int argc, char const *argv[])
{
	long long n,m,k;
	cin>>n>>m>>k;
	std::vector<long long> v(n);
	for(long long i=0;i<v.size();i++)cin>>v[i];
	while(m--){
		long long a,b,cunt=0;
		cin>>a>>b;
		a--;b--;
		for(long long i=a;i<b;i++){
			for(long long j=i+1;j<b;j++){
				if(getXor(v[i],v[j])==k)
					cunt++;
			}
		}
		cout<<cunt;
	}
	return 0;
}