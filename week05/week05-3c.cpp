/// week05-3c.cpp PART 1: Input; PART 2: Output
/// PART 3: stringstream; PART 4: reverse�ϹL��
/// PART 5: �����Y + ���[ + ���[ + ���[
/// CPE ��2�D UVA483 �r�ϹL��

#include <iostream>
#include <sstream> /// PART 3 : �� stringstram �_�r
#include <algorithm> /// PART 4 : reverse ���t��k
using namespace std;

int main()
{
    string line; /// �@��r���r�� PART 1: INPUT
    while(getline(cin, line)){ /// Ū�i��
        stringstream ss(line); /// PART 3 : �� stringstram �_�r
        string word; /// �r��o��
        ss >> word; /// PART 5 : �����Y
        reverse(word.begin(), word.end());
        cout << word; /// �����Y �S�Ů�
        while(ss>>word){ /// PART 3 : �� stringstram �_�r
            reverse(word.begin(), word.end()); /// PART 4
            cout << " " << word ; /// PART 5 : + ���[
            /// cout<<"Ū��F" << word << endl ; /// PART 3 : �� stringstram �_�r
        }
        cout << endl;
        /// cout << line << endl; /// PART 2: OUTPUT
    }
}
