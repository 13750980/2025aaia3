// week04-5.cpp
// SOIT106_ADVANCE_003
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	for(int i=0; i<10; i++){
		int n;
		cin >> n;
		if(n==0) break;
		a.push_back(n); // 新增元素至陣列的尾端
	}
	for(int i=a.size()-1; i>=0; i--){
		cout << a[i] << " ";
	}
	cout << "\n";
}
