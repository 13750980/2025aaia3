// week03-2b.cpp �G�X�@ (���n�u���� nums[i] �u��+1, -1, 0)
// LeetCode Q8: 1822. Sign of the Product of an Array
// ��}�C���_��, �O�_�����Ʃέt��, �Ϊ� 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // �]�� 0 ���ƻ򳣬O 0 , �u�� 1 ���ƻ�N����ƻ�
        for(int i=0; i<nums.size(); i++){ // �ݦ��X�Ӽ�, �j��]�X��
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            // ans*=nums[i]; //�C���� nums[i] �� ans ��
        } // �Ʀr�V���V�j, 1000�ӼƦr, ����@�b�N�z��, �ҥH���{�����~...
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
