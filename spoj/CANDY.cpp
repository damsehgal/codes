#include <iostream>
#include <cmath>
using namespace std;
bool isInt(float x){
	if(ceil(x)==floor(x))return true;
	return false;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t!=-1){
		
		int a[t],dummy=t;float avg=0;
		while(t>0){
			cin>>a[t-1];
			avg+=a[t-1];
			t--;
		}avg/=dummy;
		if(!isInt(avg))cout<<"-1"<<endl;
		else{int sum=0;
			for(int i=0;i<dummy;i++){
				sum+=abs(a[i]-avg);
			}
			cout<<sum/2<<endl;
		}
		//int t;

		cin>>t;
	}
	return 0;
}