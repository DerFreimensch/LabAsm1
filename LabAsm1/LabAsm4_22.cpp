#include <iostream>

using namespace std;

int main(void) {
	int mas[5], A;
	for (int i = 0; i < 5; i++) {
		cin >> mas[i];
	}

	__asm {
		mov esi, 0
		mov eax, 1
		mov ecx, esi
		mov ebx, 0
		L1:
		
		imul eax, mas[esi*4]
			dec esi
			cmp esi, -1
			je L2
			jmp L1
			L2:
		add ebx, eax
		mov eax, 1
			inc ecx
			mov esi, ecx
		cmp esi, 5
			je ex
			jmp L1
			ex:
		mov A, ebx

	}
	cout << A;
}