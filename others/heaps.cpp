#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{	int myints[] = {10,20,30,5,15};
	vector<int> v(myints,myints+5);
	v.push_back(99);
	make_heap(v.begin(),v.end());

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"\n";
	}
	return 0;
}