/// week07-2.cpp
/// TAICA ��j��¦�{���]�p(C++) ������ Q6
/// �e�X�W�j�������, �Ʀr�]�_��

#include <iostream>
#include <cmath> /// �� sin(), cos(), abs(), sqrt() ���
using namespace std;

int main()
{
    int n; /// PART 1: Input
    cin >> n;
    for(int i = 1; i<n*2; i++){ /// PART 2: Output
        for(int j = 1; j<n*2; j++){
            /// �L�X�ӫ�, �o�{�����ߪ� 1 �ܭ��n!!!
            int d = max(abs(i-n), abs(j-n));
            cout << d + 1; /// cout << n;
        }
        cout << endl; /// �Ӽh����
        /// cout << "Now i is: " << i << endl;
    }
}/// 2 �|�� 3 �h��, 3 �|�� 5 �h��, 4 �|�� 7 �h��, 5 �|�� 9 �h��
