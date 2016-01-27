#include <bits/stdc++.h>
using namespace std;
static int k=0;
int min(int a,int b){
	return !(b<a)?a:b;
}
int max(int a,int b){
	return (b<a)?a:b;
}
int Divide(std::vector<int>& v1,std::vector<int>& v2){
	
	int mid1=v1.size()/2;
	int mid2=v2.size()/2;
	k++;
	int m1=(v1[mid1]+v1[(v1.size()+1)/2])/2;
	int m2=(v2[mid2]+v2[(v2.size()+1)/2])/2;
	if (k==5)return k;
	if(v1.size()==2 && v2.size()==2){

		//		cout<<(max(v1[0],v2[0])+min(v1[1],v2[1]))/2<<" ";
		return (max(v1[0],v2[0])+min(v1[1],v2[1]))/2;
	}
	if(m1==m2)return m1;
	else if(m1<m2)
	{
		std::vector<int> l(v1.size()-mid1),r(v2.size()-mid2);
		for(int i=0;i<l.size();i++)l[i]=v1[(mid1)+i];
		for(int i=0;i<r.size();i++)r[i]=v2[i];	
		
	 	return Divide(l,r);
	}
	 else if(m2<m1){
		std::vector<int> l(v1.size()-mid1),r(v2.size()-mid2);
		for(int i=0;i<l.size();i++)l[i]=v1[i];
		for(int i=0;i<r.size();i++)r[i]=v2[mid2+i];
		
		return Divide(l,r);
	}
}
int main(int argc, char const *argv[])
{
	std::vector<int> v1(5),v2(5);
	v1[0]=1;v1[1]=12;v1[2]=15;v1[3]=26;v1[4]=38;
	v2[0]=2;v2[1]=13;v2[2]=17;v2[3]=30;v2[4]=45;
	//cout<<"aalo";
	cout<<Divide(v1,v2);
	return 0;
}