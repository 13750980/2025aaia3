/// week03-1.cpp �ǲ� C++ ���}�C vector<int> a;
/// File-Save As �s��, ���ɦW�g��
#include <iostream> /// C++ �� cin cout
#include <vector> /// C++ ���}�C vector
using namespace std;

int main()
{
    vector<int> a(2);  /// ���Ӱ}�C, �̭��� 2 �� (�}�C�j�p�O 2 )

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; /// ��X�}�C
    cout << endl; /// ����


    a.push_back(99); /// �� 99 ����}�C a ����᭱ .push_back("�ƭ�")
    a.push_back(88); /// �� 88 ����}�C a ����᭱
    a.push_back(77); /// �� 77 ����}�C a ����᭱

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; /// ��X�}�C
    cout << endl; /// ����
}
