// week05-5b.cpp
// SOIT107_ADVANCE_002
#include <iostream>
using namespace std;

int main()
{
	int n, M = -99999, m = 99999;
	for(int i=0; i<6; i++){
		cin >> n;
		if(n>M) M = n;
		if(n<m) m = n;
	}
	cout << M-m;
}
