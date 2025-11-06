/// week09-1b.cpp
/// SOIT106_ADVANCE_004

#include <iostream>
using namespace std;

int main()
{
	char c;
	while(cin>>c){
		if(c>='A' && c<='Z') c = c - 'A' + 'a'; /// ²æ±¼'A' ¬ï¤W 'a'
		else if(c>='a' && c<='z') c = c - 'a' + 'A';
		cout << c;
	}
	cout << endl;
}
