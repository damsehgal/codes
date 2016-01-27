#include <bits/stdc++.h>
using namespace std;
void swap(int &a ,int &b){
	a^=b^=a^=b;
}
int binary(std::vector<int> v,int low,int high,int x){
	int mid=low+(high-low)/2;
	if(low >=high)return mid;
	if(v[mid]==x)return mid;
	else if(v[mid]<x)return(binary(v,mid+1,high,x));
	else return(binary(v,low,high+1,x));
}
void buuble(std::vector<int>& a){
	int size=a.size();
	for(int i=0;i<size-1;i++){
		bool flag=false;
		for(int j=0;j<size-1;j++){
			if(a[j]>a[j+1]){swap(a[j],a[j+1]);flag=true;}
		}
		if(!flag)break;
	}
}
void buuble2(std::vector<int>& a){
int size=a.size();
	for(int i=size-1;i>=0;i--){
		bool flag=false;
		for(int j=0;j<size-1;j++){
			if(a[j]>a[j+1]){swap(a[j],a[j+1]);flag=true;}
		}
		if(!flag)break;
	}
}	
int MIN(std::vector<int>& v,int low){
	int min=low;
	for (int i = low+1; i < v.size(); ++i){
		if(v[i]<v[min]){
			min=i;
		}
	}
	cout<<min<<" "<<v[min]<<"\n";
	return min;
}
void selection(std::vector<int>& a){
	for (int i = 0; i < a.size()-1; ++i)
	{
		swap(a[MIN(a,i)],a[i]);
	}
}
void insertion(std::vector<int>& v){
	for (int i = 0; i < v.size()-1; ++i)
	{
		int j=i+1;
		while(v[j]<v[j-1]){
			swap(v[j],v[j-1]);
			j--;
		}
	}
}
void shellSort(std::vector<int> v){
	//23 -sort
	//8- sort
	//1-sort
}
int main(int argc, char const *argv[])
{	
	//int a[11]={0,11,3,45,654,65546,45,454,54,54,5};
	std::vector<int> v;
	cout<<"insert elements press -1 to exit\n";
	int t;
	cin>>t;
	while(t!=-1){
		
		v.push_back(t);
		cin>>t;
	}
	insertion(v);
	for (int i = 0; i <v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
