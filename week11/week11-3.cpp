/// week11-3.cpp
/// LeetCode Programming Skills Math Q3: 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0; /// 三種鈔票
        for(int bill: bills){ /// c++進階，for迴圈
            if(bill==5) d5++; /// 順利拿到 5 元
            if(bill==10){ /// 客人給你 10 元, 你要找 5 元
                if(d5<1) return false; /// 沒有 5 元，失敗
                d10++; /// 拿到 10 元
                d5--;  /// 找出 5 元
            }
            if(bill==20){ /// 客人給你 20 元, 要找 15 元
                if(d10>0 && d5>0){ /// 可以
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false; /// 找不開，失敗
            }
        }
        return true; /// 順利賣光，成功!
    }
};
