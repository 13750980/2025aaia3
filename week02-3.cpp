/// week02-3.cpp �ϥ� C++ 2011 �~�s�����r�� stoi() �\��
/// Codeblocks ��, �����}�� Settings-Compiler... �� C++11 ����
/// SOIT106_Advance_001 Using C++
#include <iostream> /// cin cout Ū�J�M�L�X���
#include <string> /// string �r��\��
using namespace std; /// �ϥ� [�R�W�Ŷ�] �зǪ� std

int main()
{
	string a; /// �s��, �ŧi�r��
	string ans;  /// �ŧi�r��񵪮�
	cin >> a; /// Ū�J�r��
	int n = a.length(); /// �r�ꪺ����
	for(int i=n-1; i>=0; i--){ /// �˹L�Ӫ��j��
		ans += a[i]; ///�j���, �� a[i] ��� ans ���᭱
	}
	cout << a << '+' << stoi(ans) << '='
		 << stoi(a) + stoi(ans) << '\n';
	/// cout << ans
	/// stoi() is "string to int"
	/// '\n' = 'endl'
}
