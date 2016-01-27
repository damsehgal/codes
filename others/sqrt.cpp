#include <bits/stdc++.h>
using namespace std;
int binary(int s,int low ,int high){
	//if(low==high)return low;
	//else

	if(low>high)return -1;
	int mid=low+(high-low)/2;
	cout<<low<<" "<<high<<" "<<mid<<"\n"; 
	if(mid*mid==s)return mid;
	else if((mid*mid)<s && (mid+1)*(mid+1)>s)return mid;
	if(mid*mid<s)return binary(s,mid+1,high);
	else if(mid*mid>s)return binary(s,low,mid-1);
	
	

}
int main(int argc, char const *argv[])
{
	int s;
	cin>>s;
	
	//cout<<r;
	cout<<binary(s,0,s);
	return 0;
}