/// week04-6.cpp
/// �m�ߦU�� [���Y�ۦp���}�C] vector<int> a ����l��
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;          /// (1) �S�������l�ưѼ�, ���׬� 0
    cout << "\n" << "�}�C a ������: " << a.size() << endl;

    vector<int> b(3);       /// (2) ���ӰѼ�, ���������ܦ� 3
    cout << "\n" << "�}�C b ������: " << b.size() << endl;
    for(int i = 0; i<b.size(); i++) cout << b[i] << " ";

    vector<int> c(3, 88);   /// (3) ���׬O 3 , �̭������ 88
    cout << "\n" << "�}�C c ������: " << c.size() << endl;
    for(int i = 0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};   /// (4) C �y���}�C
    vector<int> e(d, d+4);   /// C �}�C���Y�ӽd��Ӫ�l��, 4��
    cout << "\n" << "�}�C e ������: " << e.size() << endl;
    for(int i = 0; i<e.size(); i++) cout << e[i] << " ";

    vector<int> f(d, d+10);   /// C �}�C���Y�ӽd��Ӫ�l��, 10��
    cout << "\n" << "�}�C f ������: " << f.size() << endl;
    for(int i = 0; i<f.size(); i++) cout << f[i] << " ";


}

