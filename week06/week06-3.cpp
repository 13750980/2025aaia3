/// week06-3.cpp
/// LeetCode Programming Skills Simulation 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) { /// C++ �i���j��
            /// cout << op << endl; /// ���d�ݿ�X�����G(�� operations ���F��L�X��)
            if(op[0]=='+'){ /// �⥽��Ƭۥ[, �b��^�h
                int temp = a.back(); /// ���O�U�̫�@��
                a.pop_back(); /// �ȮɦR���̫�@��
                int temp2 = a.back(); /// �A�O�U�̫� 2 ��
                a.push_back(temp); /// ��̫�@����^�h
                a.push_back(temp+temp2); /// ��Ƭۥ[, �A��^�h
            }
            else if(op[0]=='D'){ /// ���ƬO���e���ƪ��⭿, �b��^�h
                a.push_back(2*a.back());
            }
            else if(op[0]=='C'){ /// �R���̫�@��
                a.pop_back();
            }
            else{ /// �� stoi(op) ���, ��^�h
                a.push_back(stoi(op));
            }
        }
        /// �̫�, �� for �j��, ��}�C a ����, �����[�_��
        int ans = 0;
        for(int now : a) { /// C++ �i���j��, �]�i�H�� for(int i=0; i<a.size(); i++) {int now = a[i]}
            ans += now;
        }
        return ans; /// ���H�K return 0
    }

};
