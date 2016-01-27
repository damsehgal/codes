#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;
	while((x!=-1 && y!=-1)){
		if((x==0||x==1 || y==0||y==1) &&(x+y!=0))
		{
			cout<<x<<"+"<<y<<"="<<x+y<<"\n";
		}
		else
		cout<<x<<"+"<<y<<"!="<<x+y<<"\n"; 
		cin>>x>>y;
	}
	return 0;
}
	