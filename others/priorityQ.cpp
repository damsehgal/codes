#include <algorithm>
#include <queue>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main(int argc, char const *argv[])
{

	priority_queue<int>q1;
	std::vector<int> v;
	int n;
	cin>>n;
	for(int i=0;;i<n;i++){
		int t;
		cin>>t;
		q1.push_back(t);
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<q1.top();
		q1.pop();
		cout<<v[i];
	}

	return 0;
}