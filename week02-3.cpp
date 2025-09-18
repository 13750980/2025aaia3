/// week02-3.cpp 使用 C++ 2011 年新版的字串 stoi() 功能
/// Codeblocks 裡, 必須開啟 Settings-Compiler... 把 C++11 打勾
/// SOIT106_Advance_001 Using C++
#include <iostream> /// cin cout 讀入和印出資料
#include <string> /// string 字串功能
using namespace std; /// 使用 [命名空間] 標準的 std

int main()
{
	string a; /// 新的, 宣告字串
	string ans;  /// 宣告字串放答案
	cin >> a; /// 讀入字串
	int n = a.length(); /// 字串的長度
	for(int i=n-1; i>=0; i--){ /// 倒過來的迴圈
		ans += a[i]; ///迴圈裡, 把 a[i] 塞到 ans 的後面
	}
	cout << a << '+' << stoi(ans) << '='
		 << stoi(a) + stoi(ans) << '\n';
	/// cout << ans
	/// stoi() is "string to int"
	/// '\n' = 'endl'
}
