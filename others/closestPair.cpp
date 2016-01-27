#include <bits/stdc++.h>
using namespace std;
struct abc
{
	int x;
	int y;
};
bool compare1(const abc& a1,const abc& b1){
	return a1.x<b1.x;
}
bool compare2(const abc& a1,const abc& b1){
	return a1.y<b1.y;
}
float dist(abc& a1,abc& b1){
	return sqrt((a1.x-b1.x)*(a1.x-b1.x)+(a1.y-b1.y)*(a1.y-b1.y));
}
// float min(float a,float b){
// 	return a<b?a:b;
// }
float DIVIDE(std::vector<abc>& v);
float COMBINE(std::vector<abc>& v,float d){
	int i=0;
	std::vector<abc> res;
	//abc a1;
	while(i<v.size()){
		if(abs(v[i].x-v[v.size()/2].x)<=d)res.push_back(v[i]);		
		i++;
	}
	if(res.size()<2)return d;
	float f=DIVIDE(res);
	if(f<d)return f;
	return d;
}
float DIVIDE(std::vector<abc> &v){
	if(v.size()==2) return dist(v[0],v[1]);
	if(v.size()==3) return min(min(dist(v[0],v[1]),dist(v[0],v[2])),dist(v[1],v[2]));
	sort(v.begin(), v.end(),compare1);
	//l,r,strip
	std::vector<abc> l(v.size()/2),r(v.size()-v.size()/2);
	for(int i=0;i<l.size();i++)l[i]=v[i];
	for(int i=0;i<r.size();i++)r[i]=v[l.size()+i];
	return COMBINE(v,min(DIVIDE(l),DIVIDE(r)));
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<abc> v(n);
	for(int i=0;i<n;i++)cin>>v[i].x>>v[i].y;
	cout<<DIVIDE(v);

	return 0;
}