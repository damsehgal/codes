/*
101403061
Dhruv Sehgal
Coe3
Q2
*/

#include <bits/stdc++.h>
using namespace std;


struct student//structure for student
{ 
 int regNo;
 string name;
 string branch;
 float cgpa;
};
void swap(student& a,student& b){//function to swap 2 students
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
 b.cgpa= temp.cgpa;
}
void LinearSearch(std::vector<student>& v,int reg){
//Linear Search to get data of a particular students. 	
 for(int i=0;i<v.size();i++){
  if(v[i].regNo==reg)
  {
   cout<<v[i].regNo<<" "<<v[i].name<<" "<<v[i].branch<<" "<<v[i].cgpa<<"\n";
   return;
  }
 }
 cout<<"No student found.";
}
void bubble(std::vector<student>& a){
 //program to sort in  asending order using bubble sort
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
//recursive binary Search to find a student in a vector of given data.
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
//INSERTION SORT IN DESCENDING ORDER.
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
{//MAIN -> execution of programm starts from here.
 cout<<"Enter No Of Student";
 int size;scanf("%d",&size);
 std::vector<student> v(size);
 cout<<"enter Data";
 for(int i=0;i<v.size();i++){

  cin>>v[i].regNo>>v[i].name>>v[i].branch>>v[i].cgpa;
 }
 //all Students entered in a vector of student. 
 cout<<"LinearSearch by regNo \n enter regNo\n to stop enter -1\n";
 int dummy;
 scanf("%d",&dummy);
 while(dummy!=-1){
  LinearSearch(v,dummy);
  scanf("%d",&dummy);
 }
 //Linear search called
 cout<<"press 1 to Sort else press 2\n";
 scanf("%d",&dummy);
 if(dummy==1)
  bubble(v);
 for(int i=0;i<v.size();i++)
  cout<<v[i].regNo<<" "<<v[i].name<<" "<<v[i].branch<<" "<<v[i].cgpa<<"\n";
 //bubble sort called
 if(dummy!=1)
  bubble(v);
 cout<<"BinarySearch by regNo \n enter regNo\n to stop enter -1\n";
 while(dummy!=-1){
  scanf("%d",&dummy);
  bin(v,0,v.size(),dummy);

 }
 //binary search called
 cout<<"press 1 to Sort in Descending order else press 2\n";
 scanf("%d",&dummy);
 if(dummy==1)
  insertion(v);
//insertion sort in decreasing order.
 for(int kal=0;kal<v.size()-1;kal++)
  cout<<v[kal].regNo<<" "<<v[kal].name<<" "<<v[kal].branch<<" "<<v[kal].cgpa<<"\n";
 cout<<"\n";
 return 0;
}
