#include <bits/stdc++.h>
using namespace std;
int binary(std::vector<int>& v){
	int mid=low+(high-low)/2;
	int high=v.size()-1,low=0;
	while(true){
		if(mid%2==0){
			if(a[mid]==a[mid+1])high=mid-1;
			else if(a[mid]==a[mid-1])low=mid+1;
			else break;
		}
		else {
			if(a[mid]==a[mid+1])high=mid-1;
			else if(a[mid]==a[mid-1])low=mid+1;
		}
	}
}
int main(int argc, char const *argv[])
{
	std::vector<int> v;

	return 0;
}