#include <btis/stdc++.h>
using namespace std;
void swap(int& a,int& b){
	a^=b;
	b^=a;
	a^=b;
}
std::vector<int> DIVIDE(std::vector<int>& v)
{
	if(v.size()==2){
		if(v[0]>v[1])swap(v[0],v[1]);
		//conquer
	}
	else if(v.size()==1)
	{
		//conquer
	}
	else{
		DIVIDE()
	}


} 
int main(int argc, char const *argv[])
{
	
	return 0;
}