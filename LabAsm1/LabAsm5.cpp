#include <iostream>

using namespace std;

int main(void) {
	int A;
	int B = 0;
	cin >> A;
	__asm{
		mov eax, 2
		mov ebx, 0
		
		L1:
		cmp ebx, 16
			je L2
		bsf eax, A
		or B, zf
			sal B
			dec eax
			cmp eax, ebx
			je L1
			add eax, 2
			add ebx, 2
			jmp L1
			L2:
		 


	}
	cout << B << endl;
}