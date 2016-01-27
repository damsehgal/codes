#include<iostream>
#include<vector> 
using namespace std;
 int sumFact(int x){
 	int sum=0;
 	for (int i = 1; i*i <= x; ++i)
 	{
 		/* code */
 		if(x%i==0)sum+=i+(x/i);
 	}
 	return sum;
 }
 bool ab(int x,int sum){
 	if(sum>x)return true;else return false;
 }

 int main(int argc, char const *argv[])
{
	vector<int> v;
	for(int i=1;i<28124;i++){
		if(ab(i,sumFact(i)))v.push_back(i);

	}
	int sum=0;
	for(int i=1;i<28124;i++){
		int flag=0;
		for(int j=0;j<v.size();j++){
			for(int k=j+1;k<v.size();k++){
				if (i=v[j]+v[k])
				{
					flag=0;
					//cout<<"a";
					goto a;
				}
				else{
					cout<<"b";
					flag=1;
				}
			}

		}a:
		if(flag)sum+=i;
		cout<<i;
	}
	cout<<endl<<sum;	
	return 0;
}