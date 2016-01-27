#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a,str="";
	map<char,int> c;
	cin>>a;
	if(a.length()==1)cout<<a;
	else{
		int i=0;
		while(i<a.length()){
			c[a[i]]++;
			i++;
		}
			for(char j='1';j<='3';j++){
				for(int k=0;k<c[j];k++){
					str+=j;
					str+='+';
				}
			}		
	}
	cout<<str.substr(0,str.length()-1);
	return 0;
}
	
