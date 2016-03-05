#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define WHILE(n)					while(n--)
#define INF                         (int)1e9
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
struct student
{
	int regNo;
	string name;
	string branch;
	float cgpa;
};
void swap(student& a,student& b){
	student temp;
	temp.regNo=a.regNo;
	temp.name=a.name;
	temp.branch=a.branch;
	temp.cgpa=a.cgpa;
	a.regNo=b.regNo;
	a.name=b.name;
	a.branch=b.branch;
	a.cgpa=b.cgpa;
	b.regNo=temp.regNo;
	b.name=temp.name;
	b.branch=temp.branch;
	b.cgpa=	temp.cgpa;
}
void LinearSearch(std::vector<student>& v,int reg){
	forall(i,0,v.size()){
		if(v[i].regNo==reg)
		{
			cout<<v[i].regNo<<" "<<v[i].name<<" "<<v[i].branch<<" "<<v[i].cgpa<<"\n";
			return;
		}
	}
	cout<<"No student found.";
}
void bubble(std::vector<student>& a){
	int size=a.size();
	for(int i=0;i<size-1;i++){
		bool flag=false;
		for(int j=0;j<size-1;j++){
			if(a[j].regNo>a[j+1].regNo){swap(a[j],a[j+1]);flag=true;}
		}
		if(!flag)break;
	}
}
void bin(std::vector<student>& a,int low,int high,int x){
	if(low>high)
	{	
		cout<<"No Student found\n";
		return ;
	}
	int mid=low+(high-low)/2;
	if(a[mid].regNo==x)
	{
		cout<<a[mid].regNo<<" "<<a[mid].name<<" "<<a[mid].branch<<" "<<a[mid].cgpa<<"\n";
		return ;
	}
	if(a[mid].regNo<x)return bin(a,mid+1,high,x);
	else return bin(a,low,mid-1,x);
}
void insertion(std::vector<student>& v){
	for (int i = 0; i < v.size()-1; ++i)
	{
		int j=i+1;
		while(j>0 && j<v.size() && v[j].regNo>v[j-1].regNo){
			swap(v[j],v[j-1]);
			j--;
		}
	}
}
int main(int argc, char const *argv[])
{
	std::vector<student> v(5);
	cout<<"enter Data";
	forall(i,0,v.size()){

		cin>>v[i].regNo>>v[i].name>>v[i].branch>>v[i].cgpa;
	}
	cout<<"LinearSearch by regNo \n enter regNo\n to stop enter -1\n";
	int dummy;
	s(dummy);
	while(dummy!=-1){
		LinearSearch(v,dummy);
		s(dummy);
	}
	cout<<"press 1 to Sort else press 2\n";
	s(dummy);
	if(dummy==1)
		bubble(v);
	forall(i,0,v.size())
		cout<<v[i].regNo<<" "<<v[i].name<<" "<<v[i].branch<<" "<<v[i].cgpa<<"\n";
	if(dummy!=1)
		bubble(v);
	cout<<"BinarySearch by regNo \n enter regNo\n to stop enter -1\n";
	while(dummy!=-1){
		s(dummy);
		bin(v,0,v.size(),dummy);
		
	}
	cout<<"press 1 to Sort in Descending order else press 2\n";
	s(dummy);
	if(dummy==1)
		insertion(v);
	
	forall(kal,0,v.size()-1)
		cout<<v[kal].regNo<<" "<<v[kal].name<<" "<<v[kal].branch<<" "<<v[kal].cgpa<<"\n";
	cout<<"\n";	
	return 0;
}