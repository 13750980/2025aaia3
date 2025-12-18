/// week15-1.cpp
/// LeetCode Programming Skills Basic Implementation Q4 242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false; /// 長度不一樣
        int H[256] = {}; /// 用來統計的 H 數量
        for(char c:s){
            H[c]++; /// 把字母對應格子++
        }
        /// 針對 t 字串，逐一拿出 H 陣列
        for(char c:t){
            H[c]--; /// 把字母對應格子++
            if(H[c]<0) return false;
        }
        return true;
    }
};
