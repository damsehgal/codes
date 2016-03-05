#include <bits/stdc++.h>
using namespace std;
struct player
{
	long long n;
	long long a;
	long long b;
	long long c;
	long long d;
	long long s;
};
bool compare(const player& a,const player& b){
	return a.s<b.s;
}
int main(int argc, char const *argv[])
{
	long long t;
	cin>>t;
	std::vector<player> v(t);
	for(int i=0;i<v.size();i++){
		cin>>v[i].n>>v[i].a>>v[i].b>>v[i].c>>v[i].d;
		v[0].s=v[0].d;
	}
	
	for (int i = 1; i < v.size(); ++i)
	{
		
		long long t=v[i-1].s;
		v[i].s=(((v[i].a)*t*t)+b*(t)+c);
	}
	sort(v.begin(), v.end(),compare);

}