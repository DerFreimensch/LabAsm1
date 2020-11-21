/*#include <iostream>

using namespace std;

int main(void) {
	int mas[5];
	for (int i = 0; i < 5; i++) {
		cin >>  mas[i];
	}

	__asm {
		mov esi, 0
		mov eax, mas[esi*4]
		mov ebx, esi
		L1:
			mov edx, mas[esi*4]
			cmp edx, eax
			jl L2

				jmp gto
			L2:
		mov eax, mas[esi*4]
			mov ebx, esi
			gto:
			cmp esi, 4
			je ex
				inc esi
			jmp L1
				ex:
			mov ecx, mas[esi*4]
			mov mas[esi*4], eax
				mov esi, ebx
			mov mas[esi*4], ecx
	}
	for (int i = 0; i < 5; i++) {
		cout  << mas[i] << " ";
	}
}*/