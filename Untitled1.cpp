#include <iostream>
using namespace std;
int main (){
	string a;
	cout<<"nama :";
	getline (cin,a);

	string b;
	cout<<"npm :";
	cin>>b;
	
	string c;
	cout<<"alamat :";
	cin>>c;

	string d;
	cout<<"hobi :";
	cin>>d;

	cout<<"nama :"<<a<<endl;
	cout<<"npm :"<<b<<endl;
	cout<<"alamat :"<<c<<endl;
	cout<<"hobi :"<<d<<endl;
	return 0;
}
