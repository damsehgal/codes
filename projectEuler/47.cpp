#include<iostream>
using namespace std;
bool CountFact(int x){
	int p=2;int count=0;
	while(p<=x && x>1){
		if(x%p==0){//cout<<p<<" ";
			while(x%p==0){x/=p;}count++;
		}
		if(count>=4)return true;
		if(p==2)p=3;
		else p+=2;
	}
	if(count<4)return false;
		return true;
}
int main(int argc, char const *argv[])
{
	for (long long int i = 20; i < 1000000; i++)
	{//cout<<CountFact(134043);			
		if(CountFact(i) && CountFact(i+1) && CountFact(i+2) && CountFact(i+3)){cout<<i<<" ";break;}
	}cout<<"lopp";
	return 0;
}