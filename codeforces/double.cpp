#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> x;
	x.push_back(5);
	int n;
	cin>>n;
	int i=0;
	if(n<6){
		switch(n){
			case 1:cout<< "Sheldon";break;
			case 2:cout<<"Leonard";break;
			case 3:cout<<"Penny";break; 
			case 4:cout<<"Rajesh";break;
			case 5:cout<<"Howard";break;
		}
	}
	else{
		for(i=1;i<35;i++){
			x.push_back(x[i-1]+5*pow(2,i));
			if(n-x[i]<0){
				break;
			}
		}
		n-=x[i-1];
		switch(int(ceil(n/pow(2,i)))){
			case 1:cout<< "Sheldon";break;
			case 2:cout<<"Leonard";break;
			case 3:cout<<"Penny";break; 
			case 4:cout<<"Rajesh";break;
			case 5:cout<<"Howard";break;
		}
	}
	return 0;
}