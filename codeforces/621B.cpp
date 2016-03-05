#include <bits/stdc++.h>
using namespace std;

struct point
{
	int x;
	int y;
};
struct slope
{
	int yord;
	int count;
};
int NC2(int n){
	return ((n)*(n-1))/2;
}
bool search(std::vector<slope>& C ,int x){
	for (int i = 0; i < C.size(); ++i)
	{
		/* code */
		if(C[i].yord==x){
			C[i].count++;
			return true;
		}

	}
	slope temp;
	temp.yord=x;
	temp.count=1;
	C.push_back(temp);
	return false;
}
int checkDiag(int x,int y,std::vector<slope>& C1 ,std::vector<slope>& C2){
	int c1=y-x;
	int c2=y+x;
	search(C1,c1);
	search(C2,c2);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<point> v(n);
	std::vector<slope> C1,C2;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>v[i].x>>v[i].y;

	}
	for (int i = 0; i < n; ++i)
	{
		checkDiag(v[i].x,v[i].y,C1,C2);
	}
	long long cunt=0;
	for(int i=0;i<C1.size();i++){
		//cout<<C1[i].yord<<" ;"<<C1[i].count<<"\n";
		if(C1[i].count>1){
			cunt+=NC2(C1[i].count);
		//	cout<<cunt;
		}
	}

	for(int i=0;i<C2.size();i++){
		//cout<<C2[i].yord<<" ;"<<C2[i].count<<"\n";
		if(C2[i].count>1){
			cunt+=NC2(C2[i].count);
			//cout<<cunt;
		}
	}
	//cout<<NC2(3);
	cout<<cunt;
	return 0;
}