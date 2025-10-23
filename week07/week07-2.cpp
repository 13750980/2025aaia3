/// week07-2.cpp
/// TAICA ユ膀娄祘Α砞璸(C++) 戳いσ Q6
/// 礶禬タよ, 计癬ㄓ

#include <iostream>
#include <cmath> /// Τ sin(), cos(), abs(), sqrt() ㄧ计
using namespace std;

int main()
{
    int n; /// PART 1: Input
    cin >> n;
    for(int i = 1; i<n*2; i++){ /// PART 2: Output
        for(int j = 1; j<n*2; j++){
            /// ㄓ, 祇瞷タいみ 1 璶!!!
            int d = max(abs(i-n), abs(j-n));
            cout << d + 1; /// cout << n;
        }
        cout << endl; /// 加糷阀├
        /// cout << "Now i is: " << i << endl;
    }
}/// 2 穦Τ 3 糷加, 3 穦Τ 5 糷加, 4 穦Τ 7 糷加, 5 穦Τ 9 糷加
