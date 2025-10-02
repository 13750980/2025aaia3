// week04-4b.cpp PART 3: Algorithm(while, if) PART 4: NOW
// UVA100 The 3n+1
#include <iostream>
using namespace std;

int main()
{
	int a, b; // PART 1: Input
	while(cin >> a >> b){
		int ans = 0; // ans will be here
		int now = 1; // PART 4
		while(n != 1){ // PART 3: Algorithm(while, if)
			if(n%2==1) n = 3*n+1;
			else n /= 2;
			now++; // PART 4
		}
		if(now>ans) ans = now; // PART 4
		printf("%d %d %d\n", a, b, ans);
	} //PART 2: Output
}
