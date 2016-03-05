#include <bits/stdc++.h>
using namespace std;
void SWAP(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
}
void QuickSort(std::vector<int>& v){
	int pivot =v[v.size()-1];
	int wall=0;
	int index=0;
	while(wall<v.size())
	{	
		pivot=v[v.size()-1];
		while(index<v.size()-1){
			if(v[index]<pivot){
				swap(v[index],v[wall]);
				wall++;
				cout<<"    "<<wall<<"   \n";
			}
			index++;
			//cout<<"wall="<<wall<<"index="<<index<<"\n";
		}

		//cout<<v[wall]<<" , "<<v[v.size()-1]<<"\n";
		SWAP(v[wall],v[v.size()-1]);
		wall++;
		index=wall;
	}
}
int main(int argc, char const *argv[])
{
	std::vector<int> v(5);
	for (int i = 0; i < v.size(); ++i)cin>>v[i];
	QuickSort(v);
	for (int i = 0; i < v.size(); ++i)cout<<v[i]<<" ";
	return 0;
}