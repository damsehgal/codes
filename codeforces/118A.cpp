#include <bits/stdc++.h>
using namespace std;
bool IsVowel(char a){
	if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='y'))return true;
	return false;
}
int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++){
		a[i]=tolower(a[i]);
		if(!IsVowel(a[i]))cout<<"."<<a[i];

	}
	return 0;
}
	