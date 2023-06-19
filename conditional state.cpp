#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int c,d;
	cout<<"Input 4 integer a, b,c,d"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	//statement :a>b
	cout<<(a>b&&c>d);
	cout<<(a>b||c>d);
	
	//c++ interpretes true as 1
	//c++ interpretes false as 0
}
