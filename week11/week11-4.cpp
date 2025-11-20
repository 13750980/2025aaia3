/// week11-4.cpp
/// LeetCode Programming Skills Math Q6: 67. Add Binary

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length()-1; /// 最右邊的個位數
        vector<int> ans; /// 伸縮自如的陣列，裡面放答案
        int carry = 0; /// 進位的變數(直式加法, 上面小小的進位)
        while(i>=0||j>=0){ /// 想要a[i] vs. b[i] 來進行加法
            int now = carry;  /// 現在的這個位數, 要做加法(等一下再改)
            if(i>=0){
                now += a[i] - '0'; /// 字母 a[i] 減掉 '0' 變數值
                i--;               /// 之前教過的「到過來的迴圈」，for(int i=N-1; i>=0; i++)
            }
            if(j>=0){
                now += b[j] - '0';
                j--;
            }
            ans.push_back(now%2); /// 加完後，要放入答案!
            carry = now/2; /// 看有沒有進位(carry)
        }
        if(carry>0) ans.push_back(carry); ///結束時, 還有進位
        /// 迴圈外面 ans 可以拿來用(還沒寫完)
        string strAns; /// 最後 return 的字串
        for(int i=ans.size()-1; i>=0; i--){
            strAns += (char)(ans[i]+'0');
        }
        return strAns;
    }
};
