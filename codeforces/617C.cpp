#include <bits/stdc++.h>
using namespace std;
struct point
{
	long long r1x;
	long long r2x;
};
bool compare1(const point& a,const point& b){
	return a.r1x<b.r1x;
}
bool compare2(const point& a,const point& b){
	return a.r2x<b.r2x;	
}
long long dist1(long long x1,long long y1,long long x2,long long y2){
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
std::vector<point>v1;
std::vector<long long> v2;
void dist(long long x1,long long y1,long long x2,long long y2,long long x,long long y){
	point p1;
	p1.r1x=dist1(x1,y1,x,y);
	p1.r2x=dist1(x2,y2,x,y);
	v1.push_back(p1);
}
int main(int argc, char const *argv[])
{
	long long n,x1,y1,x2,y2;
	cin>>n>>x1>>y1>>x2>>y2;
	if(n>1){while(n--){
		long long l1,l2;
		cin>>l1>>l2;
		dist(x1,y1,x2,y2,l1,l2);
	}
	sort(v1.begin(), v1.end(),compare1);	
	for(long long i=0;i<v1.size()-1;i++)
		{	//cout<<v1[i].r1x<<" "<<v1[i].r2x<<"\n";
			long long maxj=v1[i+1].r2x;
			for(long long j=i+1;j<v1.size();j++){
				if(maxj<v1[j].r2x)maxj=v1[j].r2x;
			}
			//cout<<"maxj "<<maxj<<"\n" ; 
			v2.push_back(maxj+v1[i].r1x);
		}
	sort(v1.begin(), v1.end(),compare2);	
	for(long long i=0;i<v1.size()-1;i++)
		{
			long long maxj=v1[i+1].r1x;
			for(long long j=i+1;j<v1.size();j++){
				if(maxj<v1[j].r1x)maxj=v1[j].r1x;
			}
			v2.push_back(maxj+v1[i].r2x);
		}
	long long MIN=v2[0];	
	for(long long i=0;i<v2.size();i++){
		//cout<<v2[i]<<"\n ";
		if(MIN>v2[i])MIN=v2[i];
	}
	cout<<MIN;
}
	else{
		long long x,y;
		cin>>x>>y;
		cout<<min(dist1(x1,y1,x,y),dist1(x2,y2,x,y));
	} 
	return 0;
}