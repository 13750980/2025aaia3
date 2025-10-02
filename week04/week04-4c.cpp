// week04-4c.cpp
// UVA100 The 3n+1
// PART 5:for(int i = a; i<=b; i++){int n = i;}
// PART 6:if(A2>B2) SWAP IT
#include <iostream>
using namespace std;

int main()
{
	int a, b; // PART 1: Input
	while(cin >> a >> b){
		int ans = 0; // ans will be here
		int a2 = a, b2 = b; // PART 6
		if(a2>b2) swap(a2, b2); //exchange
		for(int i = a2; i<=b2; i++){
			int now = 1; // PART 4
			int n = i; // PART 5
			while(n != 1){ // PART 3: Algorithm(while, if)
				if(n%2==1) n = 3*n+1;
				else n = n/2;
				now++; // PART 4
			}
			if(now>ans) ans = now; // PART 4
		}
		printf("%d %d %d\n", a, b, ans);
	} //PART 2: Output
}
