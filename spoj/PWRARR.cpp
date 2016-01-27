#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//find sum of (total number of numbers n array less than equal it)


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int b[50000];for(int i=0;i<50000;i++)b[i]=0;
		int n;cin>>n;long long int sum=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			for(int j=a[i];j>0;j--)b[j]++;	
		}
		for(int i=0;i<50000;i++)sum+=b[i];
		cout<<sum<<endl;
	}
	return 0;
}