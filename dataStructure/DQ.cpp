#include <algorithm>
#include <queue>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

	
int main(int argc, char const *argv[])
{
	deque<int>q1;
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int lm;
		cin>>lm;
		v.push_back(lm);

	}
	q1.assign(v.rbegin(), v.rend());
	while(!(q1.empty())){
		q1.pop_back();
		cout<<q1[q1.size()]<<" ";
		q1.pop_front();
		cout<<q1[0]<<"\n ";
	}
	return 0;
}