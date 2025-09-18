/// week02-1b.cpp Part 2
/// SOIT106_Advance_001 Using C
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int b = n;
	int ans = 0;///backup

	while(n>0){///­é¥Öªk
		ans = ans*10 + n%10;
		n = n/10;
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}
