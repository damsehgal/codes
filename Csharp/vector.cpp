//.push_back(value)->adds an element at the end of a vector
//.at(index)-> returns valuee at index
//size>returns size
//myvector.begin()->reads element from first element
//v.inseert(myvector.begin()+integer,new value)->adds element at specified index
//v.erase(v.begin())->removes the number at specified index	
//v.clear()->clears the vector
//v.empty()->returns true if v is clear

#include<iostream>
#include<vector>
using namespace std;
void fillVector(vector<int>& v/*no name pass a vector by referrence*/){
	cout<<"type -1 to stop";
	int input;
	cin>>input;
	while(input!=-1){
		v.push_back(input);
		cin>>input;
	}
	cout<<endl;
}
void printVector(vector<int>& v){
	for(unsigned int i=0;i<v.size();i++)cout<<v[i];
		cout<<endl;
}
void reverse(std::vector<int>& v){
	
		/* code */
		vector<int>::iterator j=v.end()-1;
		for (vector<int>::iterator i = v.begin(); i < v.end(); i++,j--)
		{
			/* code */
			// *i^=*j;
			// *j^=*i;
			// *i^=*j;
			int t=*i; 
			*i=*j;
			*j=t;
		}
}

	

int main(int argc, char const *argv[])
{	
	vector<int> v;
	
	/*v.push_back(2);
	v.push_back(1);
	for(unsigned int i=0;i<v.size();i++){
		//cout<<v.at(i);
		cout<<v[i];
	}
	cout<<endl;
	v.insert(v.begin()+1,5);
	for(unsigned int i=0;i<v.size();i++){
		//cout<<v.at(i);
		cout<<v[i];
	}cout<<endl;

	v.erase(v.begin());
	for(unsigned int i=0;i<v.size();i++){
		//cout<<v.at(i);
		cout<<v[i];
	}
	//v.clear();
	if(v.empty())cout<<"empty";else cout<<"not";*/
	fillVector(v);
	printVector(v);
	reverse(v);
	printVector(v);
	return 0;
}