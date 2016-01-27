#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int lm=n;
		float x1=0,y1=0;
		while(lm--){
			int x,y;
			cin>>x>>y;
			x1+=x;
			y1+=y;
		}x1/=n;y1/=n;
		cout<<fixed;
		cout<<setprecision(2)<<x1<<" ";
		cout<<setprecision(2)<<y1<<"\n";
	}
	return 0;
}