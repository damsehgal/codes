#include <bits/stdc++.h>
using namespace std;
void Type1(string& z){
	//R23C55
	//55->BC
	int col=0,row = 0,i=1;
	while(z[i]!='C'){
		row = row*10+(z[i]-48);
		i++;
	}
	i++;
	while(i<z.length()){
		col = col*10+(z[i]-48);
		i++;
	}

	stack<int>myStack;
	while(col>0){
		int y=col%26;
		myStack.push(y);
		col/=26;
	}
	while(!myStack.empty()){

		int a = myStack.top();
		if(a)cout<<char(64+a);
		else cout<<'Z';
		myStack.pop();
	}
cout<<row<<endl;


}
void Type2(string& z){
	//BC23->R23C55
	int i;
	for(i=0;i<z.length();i++){
		if(z[i]<65)break;
	}
	int sum=0;
	for(int j=0;j<i;j++){
		//C->3
		int lm=z[j]-64;
		sum=sum*26+lm;
	}
	cout<<"R";
	for(;i<z.length();i++){
		cout<<z[i];
	}cout<<"C"<<sum<<"\n";


}
bool isType1(string& z){
	if(z.length()>=4){
		if(z[0]=='R' && z[1]>48 && z[1]<57)
			return true;}//R23C55
		
		else return false;
	
}

int main(int argc, char const *argv[])
{
	// string a = "R23C55";
	// string b;//="BC23";
	int t;
	cin>>t;
	while(t--){
		string b;
		cin>>b;
		if(isType1(b))Type1(b);
		else Type2(b);
	}
	//Type1(a);
	//Type2(b);
	return 0;
}
