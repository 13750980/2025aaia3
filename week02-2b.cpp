/// week02-2b.cpp Part 2
/// SOIT106_Advance_001 Using C++
#include <iostream> /// cin cout
#include <string> /// string
using namespace std;

int main()
{
	string a; /// �s��, �r��
	string ans;
	cin >> a;
	int n = a.length(); /// �r�ꪺ����
	for(int i=n-1; i>=0; i--){
		ans += a[i];
	}
	cout << a << '+' << stoi(ans) << '='
		 << stoi(a) + stoi(ans) << '\n';
	/// cout << ans
	/// stoi() is "string to int"
	/// '\n' = 'endl'
}
