#include <bits/stdc++.h>
using namespace std;
long double dist(long long int x,long long int y,long long int x1,long long int y1){
	
	long double la= sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
	//cout<<la<<"\n";
	return la;
}
int main(int argc, char const *argv[])
{
	long long int n,x,y;
	cin>>n>>x>>y;
	long double min= 1000001;
	long double max=-1;
	for(int i=0;i<n;i++){
		long long int x1,y1;
		cin>>x1>>y1;
		if(min>dist(x,y,x1,y1))min=dist(x,y,x1,y1);
		if(max<dist(x,y,x1,y1))max=dist(x,y,x1,y1);
	//	cout<<"max= "<<max<<" "<<min<<"\n";
	}

	long double pi=3.14159265358979323846264338327950288419716939937510;
	long double ans=pi*((max*max)-(min*min));
	cout<<fixed<<setprecision(40)<<ans;
	return 0;
}