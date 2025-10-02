// week04-2.cpp
// LeetCode Programming Skills Q10: 896. Monotonic Array
// �}�C�ܳ��, �u���W�[�δ��, ��̤��i�P��
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        int up = 0, down = 0; // up ���W�[ down �����
        for(int i = 1; i<nums.size(); i++){ // �����
            if(nums[i-1] < nums[i]) up = 1; // �W�[
            if(nums[i-1] > nums[i]) down = 1; // ���
        }
        if(up==1 && down==1) return false; // ���i �S�W�S��
        else return true; // �S������, �N���\

    }
};
