#include <bits/stdc++.h>
using namespace std;

	
int main(int argc, char const *argv[])
  {
  	int n;
  	cin>>n;
  	while(n--){
  		string a;
  		cin>>a;
  		if(a.length()>10){
  			cout<<a[0]<<a.length()-2<<a[a.length()-1]<<"\n";

  		}
  		else cout<<a<<"\n";
  	}
  	return 0;
  }  