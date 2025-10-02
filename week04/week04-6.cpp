/// week04-6.cpp
/// 練習各種 [伸縮自如的陣列] vector<int> a 的初始化
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;          /// (1) 沒有任何初始化參數, 長度為 0
    cout << "\n" << "陣列 a 的長度: " << a.size() << endl;

    vector<int> b(3);       /// (2) 有個參數, 對應長度變成 3
    cout << "\n" << "陣列 b 的長度: " << b.size() << endl;
    for(int i = 0; i<b.size(); i++) cout << b[i] << " ";

    vector<int> c(3, 88);   /// (3) 長度是 3 , 裡面都塞著 88
    cout << "\n" << "陣列 c 的長度: " << c.size() << endl;
    for(int i = 0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};   /// (4) C 語言陣列
    vector<int> e(d, d+4);   /// C 陣列的某個範圍來初始化, 4格
    cout << "\n" << "陣列 e 的長度: " << e.size() << endl;
    for(int i = 0; i<e.size(); i++) cout << e[i] << " ";

    vector<int> f(d, d+10);   /// C 陣列的某個範圍來初始化, 10格
    cout << "\n" << "陣列 f 的長度: " << f.size() << endl;
    for(int i = 0; i<f.size(); i++) cout << f[i] << " ";


}

