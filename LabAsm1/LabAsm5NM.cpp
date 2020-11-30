/*#include <iostream>

using namespace std;
int main(void) {
	unsigned int A, B=0, C;
	cin >> A;
	if (A > 65535) {
		C = 32;
	}
	else {
		C = 16;
	}
	__asm {
		xor eax, eax
		L1:
		cmp eax, C
			je L2
		bt A, eax
		jc cf1
		sal B, 1
		jmp cf0
		cf1 :
		sal B, 1
			or B, 1
			cf0 :
			inc eax
			jmp L1
			L2:
	}
	cout << B << endl;
*/