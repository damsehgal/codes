#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main(int argc, char const *argv[])
{
	list<int>l1,l2,l3;
	int myInts[10]={1,2,3,4,5,6,7,8,9,0};
	l1.assign(10,20);//assign(x,y) assigns x values of y  
	l2.assign(l1.begin(), l1.end());//assigns l2=l1;
	l3.assign(myInts,myInts+2);
	int x=l1.size();//returns size of list
	cout<<x<<" ";
	x=l2.size();
	cout<<x<<" ";
	x=l3.size();
	cout<<x<<" ";
	return 0;
}