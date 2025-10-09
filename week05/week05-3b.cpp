/// week05-3b.cpp PART 1: Input; PART 2: Output
/// PART 3: stringstream; PART 4: reverse�ϹL��
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
        while(ss>>word){ /// PART 3 : �� stringstram �_�r
            reverse(word.begin(), word.end()); /// PART 4
            cout<<"Ū��F" << word << endl ; /// PART 3 : �� stringstram �_�r
        }
        cout << line << endl; /// PART 2: OUTPUT
    }
}
