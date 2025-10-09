/// week05-3c.cpp PART 1: Input; PART 2: Output
/// PART 3: stringstream; PART 4: reverse反過來
/// PART 5: 火車頭 + 車廂 + 車廂 + 車廂
/// CPE 第2題 UVA483 字反過來

#include <iostream>
#include <sstream> /// PART 3 : 用 stringstram 斷字
#include <algorithm> /// PART 4 : reverse 的演算法
using namespace std;

int main()
{
    string line; /// 一行字的字串 PART 1: INPUT
    while(getline(cin, line)){ /// 讀進來
        stringstream ss(line); /// PART 3 : 用 stringstram 斷字
        string word; /// 字放這裡
        ss >> word; /// PART 5 : 火車頭
        reverse(word.begin(), word.end());
        cout << word; /// 火車頭 沒空格
        while(ss>>word){ /// PART 3 : 用 stringstram 斷字
            reverse(word.begin(), word.end()); /// PART 4
            cout << " " << word ; /// PART 5 : + 車廂
            /// cout<<"讀到了" << word << endl ; /// PART 3 : 用 stringstram 斷字
        }
        cout << endl;
        /// cout << line << endl; /// PART 2: OUTPUT
    }
}
