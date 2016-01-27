#include<iostream>
#include<cstring>
using namespace std;
class person
{

private:
	string a;
	int age;
	static int count; 	
public:
	person(){
		count++;
	}
	void getData(void);
	void display(void);
	static void adam(int x);
	//~person();
	
};
void person::adam(int y){
	cout<<count;
}
void person::getData(void){
	cin>>a;cin>>age;
}
void person::display(void){
	cout<<a<<endl<<age;
}
void abc() {cout<<"a";}
int main(int argc, char const *argv[])
{
	/*abstraction ->act of representing essebtial features w/o including 
					background details
	encapsulation ->wrapping up of data and functions in a single unit
	DynamicBinding->code associated with a given procedure call is not 
					known till runtime.
	Message Passing->objects communicate with each other by sending and 
					 and recieving information
	tokens->keywords,identifiers->only alpha numeric _ cant start with numbers
	,constant,string,operators
	::m will put global value of m
	static vs const
	static value is shared b/w all objects of a class
	const value iss constant for any object of class

	  */
	abc();
	int *p=new int(100);
	cout<<p<<endl<<*p<<endl<<&p;
	person p1;
	//p1.getData();
	//p1.display();
	cout<<endl;
	p1.adam(12);
	return 0;
}