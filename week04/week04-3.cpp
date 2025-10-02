// week04-3.cpp
// LeetCode Programming Skills Q7: 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // 上課教過, 陣列的大小
        for(int i = n-1; i>=0; i--){ // 倒過來的迴圈
            if (digits[i] == 9) { // 要處理進位
                digits[i] = 0; // 設成 0 繼續做 不結束
            }
            else { // 不進位, 直接 ++ 就結束
                digits[i]++; // 簡單 +1
                return digits; // 全部的陣列[當答案]
            }
        }
        digits.insert(digits.begin(), 1); // 最左邊要插入 1
        return digits; // 結束
    }
};
