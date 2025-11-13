/// week10-3.cpp 把「羅馬數字」算出來
/// LeetCode Programming Skills Basic Implementation Q11：13. Roman to Integer
/// (1) 要有對照表，字母對數字
/// (2) 正常的相加，倒裝句

class Solution {
public:
    /// 對照表函式
    int helper(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total = 0, prev, now;
        for(int i=0; i<s.length(); i++){
            /// total += helper(s[i]); /// 還沒處理「倒裝句」
            prev = now; /// 現在變成舊的 prev 數字
            now = helper(s[i]); /// 現在新的數字
            if(prev<now) total = total - prev - prev + now; /// 倒裝句 前小 後大, 扣掉 2 次 prev
            else total += now;
        }
        return total;
    }
};
