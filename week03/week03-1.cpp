/// week03-1.cpp 學習 C++ 的陣列 vector<int> a;
/// File-Save As 存檔, 把檔名寫齊
#include <iostream> /// C++ 的 cin cout
#include <vector> /// C++ 的陣列 vector
using namespace std;

int main()
{
    vector<int> a(2);  /// 有個陣列, 裡面有 2 格 (陣列大小是 2 )

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; /// 輸出陣列
    cout << endl; /// 跳行


    a.push_back(99); /// 把 99 推到陣列 a 的更後面 .push_back("數值")
    a.push_back(88); /// 把 88 推到陣列 a 的更後面
    a.push_back(77); /// 把 77 推到陣列 a 的更後面

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; /// 輸出陣列
    cout << endl; /// 跳行
}
