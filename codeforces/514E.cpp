#inculde <bits/stdc++.h>
using namespace std;
long long f(std::vector<int>& v,std::vector<int>& b,int i,std::vector<int>& cunt){
	if(i<v[0])return 0;
	if(b[i-1]!=0)return b[i];

	long long sum=0;
	for(int lm=0;lm<cunt.size();lm++)
		{
			sum+=cunt[lm]*f(v,b,(i-v[cunt[lm]-1]),cunt);
		}
	b.push_back(sum);
	return sum;
}
int main(int argc, char const *argv[])
{
	int n,x,MOD=1000000007;
	cin>>n>>x;
	std::vector<int> v(n),b,cnt;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	for(int i=0;i<v[0];i++)b.push_back(0);
	sort(v.begin(), v.end());
	int cunt=1;
	for(int i=0;i<v.size()-1;i++){
		if(v[i]==v[i+1])
			cunt++;
		else 
			{
				cnt.push_back(cunt);
				cunt=0;
			}
	}
	long long sum=0;
	for(int i=0;i<v.size();i++){
		sum+=f(v,b,i,cnt)%MOD;
	}
	sum%=MOD;
	return 0;
}