/// week12-3.cpp
/// LeetCode Programming Skills Math Q7: 43. Multiply Strings
/// 用字串模擬乘法

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0"; /// 陷阱: 0 乘上任何數，直接 0
        int n1 = num1.length(), n2 = num2.length();
        vector<int> ans(n1+n2); /// 最多 n1+n2 位數
        for(int i=n1-1; i>=0; i--){ /// 兩層暴力 for 迴圈
            for(int j=n2-1; j>=0; j--){ /// 倒過來的迴圈
                ans[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                /// num1[i] vs. num2[j] 要記得把字母變數值
                if(ans[i+j+1]>9) ans[i+j] += ans[i+j+1]/10; /// 進位
                ans[i+j+1] = ans[i+j+1]%10; /// 餘數
            }
        }
        string strAns; /// 答案的字串
        if(ans[0]==0){ /// 沒有進位，最前面是 0
            for(int i=1; i<n1+n2; i++){ /// 只好避開最前面的 0
                strAns += (char)(ans[i]+'0');
            }
        }else{ /// 有進位，對齊 n1+n2 位
            for(int i=0; i<n1+n2; i++){
                strAns += (char)(ans[i]+'0');
            }
        }
        return strAns;
    }

};
