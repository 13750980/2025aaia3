/// week05-2.cpp
/// ���x stringstream
#include <iostream> /// cin, cout, getline Ū�g���
#include <sstream> /// stringstream �s�M��
#include <string> /// �ڭ̪��r�� string
using namespace std;

int main()
{
    cout << "��J�@�q�^��, �̭��i���Ů�: ";
    string s; /// �r�� s
    getline(cin, s); /// �@��Ū�J�@���, ��J s
    cout << "Ū�� s �r��: " << s << endl ;

    stringstream ss(s); /// �N�r�� s �ܦ� ss
    string word; /// �r�� word
    while(ss>>word){
        cout << "���@�Ӧr: " << word << "\n";
    }
}

