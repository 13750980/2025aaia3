// week05-5a.cpp
// SOIT107_ADVANCE_002
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int M = n, m = n;
	for(int i=0; i<5; i++){
		cin >> n;
		if(n>M) M = n;
		if(n<m) m = n;
	}
	cout << M-m;
}
