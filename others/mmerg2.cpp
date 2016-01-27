#include <bits/stdc++.h>
using namespace std;
//now make insertion sort for length<10
void swap(int& a,int& b){
	a^=b^=a^=b;
}
int cunt;
// void insertion(std::vector<int>& v){
	
// 	for (int i = 0; i < v.size()-1; ++i)
// 	{	
// 		int j=i+1;
// 		while(v[j]<v[j-1]){
// 			swap(v[j],v[j-1]);
// 			j--;
// 		}
// 	}

// }
void MERGE(std::vector<int>& v,std::vector<int>& l,std::vector<int>& r){
	int i=0,j=0,k=0;
	while(i<l.size() && j<r.size()){
		if(l[i]<r[j]){
			v[k]=l[i];
			i++;
		}
		else{
			cunt++;
			v[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<l.size()){
		v[k]=l[i];
		i++;
		k++;
	}
	while(j<r.size()){
		v[k]=r[j];
		j++;
		k++;
	}

	// for(int i=0;i<r.size();i++)v.push_back(r[i]);	
}
void MERGESORT(std::vector<int>& v){
	if(v.size()<2)return;
	
	
	int mid=v.size()/2;
	std::vector<int> l(mid),r(v.size()-mid);
	for(int i=0;i<mid;i++)l[i]=v[i];
	for(int i=mid,k=0;i<v.size();i++,k++)r[k]=v[i];
	MERGESORT(l);
	MERGESORT(r);
	MERGE(v,l,r);
}
int main(int argc, char const *argv[])
{
	cunt=0;
	std::vector<int> v(5);
	srand(time(NULL));
	for(int i=0;i<5;i++){v[i]=(rand()%15);cout<<v[i]<<" ";}

	MERGESORT(v);
	cout<<"\n";
	for (int i = 0; i < v.size(); ++i)cout<<v[i]<<" ";
		cout<<"\n"<<cunt;	return 0;
	
}