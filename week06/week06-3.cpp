/// week06-3.cpp
/// LeetCode Programming Skills Simulation 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) { /// C++ 進階迴圈
            /// cout << op << endl; /// 先查看輸出的結果(把 operations 的東西印出來)
            if(op[0]=='+'){ /// 把末兩數相加, 在塞回去
                int temp = a.back(); /// 先記下最後一項
                a.pop_back(); /// 暫時吐掉最後一項
                int temp2 = a.back(); /// 再記下最後 2 項
                a.push_back(temp); /// 把最後一項塞回去
                a.push_back(temp+temp2); /// 兩數相加, 再塞回去
            }
            else if(op[0]=='D'){ /// 分數是先前分數的兩倍, 在塞回去
                a.push_back(2*a.back());
            }
            else if(op[0]=='C'){ /// 吐掉最後一位
                a.pop_back();
            }
            else{ /// 把 stoi(op) 整數, 塞回去
                a.push_back(stoi(op));
            }
        }
        /// 最後, 用 for 迴圈, 把陣列 a 的值, 全部加起來
        int ans = 0;
        for(int now : a) { /// C++ 進階迴圈, 也可以用 for(int i=0; i<a.size(); i++) {int now = a[i]}
            ans += now;
        }
        return ans; /// 先隨便 return 0
    }

};
