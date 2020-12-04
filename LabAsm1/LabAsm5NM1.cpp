/*#include <iostream>

using namespace std;

int main() {
	unsigned int A, B=0, C, D, E;

	cin >> A;
	if (A < 65535) {
		C = 1;
		D = 16;
		E = 8;
	}
	else {
		C = 3;
		D = 32;
		E = 24;
	}

	__asm {
		xor eax, eax
		mov ebx, E
		L1:
		cmp eax, C
			jg L2
			cmp ebx, D
			jne L3
			inc eax
			sub E, 8
			sub D, 8
			cmp D, 0
			je L2
		   mov ebx, E
			L3:
		bt A, ebx
			jc cf1
			sal B, 1
			jmp cf0
			cf1 :
		sal B, 1
			or B, 1
			cf0 :
			inc ebx
		jmp L1
			L2:
	}
	cout << B << endl;
	return 0;
}*/