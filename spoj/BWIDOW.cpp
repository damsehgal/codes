#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int r[n],R[n];
		for(int i=0;i<n;i++){
			cin>>r[i]>>R[i];
		}
		int max=0,maxI;
		for(int i=0;i<n;i++){if(r[i]>max){max=r[i];maxI=i;}}
		int maxR=R[maxI];
		for(int i=0;i<n;i++){if(R[i]>maxR)maxR=R[i];}
		if(maxR==R[maxI])cout<<1+maxI<<"\n";
		else cout<<"-1\n";
	}	
	return 0;
}