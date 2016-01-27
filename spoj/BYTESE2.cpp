#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
 int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
			for(int i=0;i<n;i++)a[i]=0;
		for(int i=0;i<n;i++){
			int en,ex;
			cin>>en>>ex;
			for(int j=en-1;j<ex;j++)a[j]++;

		}long long int max=0;
		for(int i=0;i<n;i++)cout<<a[i]<<" ";//if(a[i]>max)max=a[i];
		cout<<max<<"\n";

	}
	return 0;
}