/// week15-2.cpp
/// LeetCode Programming Skills Basic Implementation Q5 459. Repeated Substring Pattern
/// 頭尾去掉, 問裡面是否有原本的字串

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s+s; /// make double string
        string s3 = s2.substr(1, s2.length()-2); /// 頭尾去掉
        return s3.find(s) != string::npos; /// 在 s3 裡面找 s 字串(雙重否定句)
    }
};
