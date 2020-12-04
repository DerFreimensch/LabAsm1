#include <iostream>

using namespace std;

int main() {
	unsigned int A, mas[4], C = 0, D, E;
	cin >> A;
	if (A < 65535) {
		D = 8;
		E = 16;
		for (int i = 0; i < 2; i++) {
			__asm {
				xor eax, eax
				xor eax, D
				xor ebx, ebx
				or ebx, D
				L1 :
				cmp eax, E
					je L2
					bt A, ebx
					jc cf1
					jmp cf0
					cf1 :
				inc C
					cf0 :
				inc eax
					inc ebx
					jmp L1
					L2 :
			}
			mas[i] = C;
			C = 0;
			E = E - 8;
			D = D - 8;
		}
		for (int i = 0; i < 2; i++) {
			cout << mas[i] << ' ';
		}
	}
	else {
		D = 24;
		E = 32;
		for (int i = 0; i < 4; i++) {
			__asm {
				xor eax, eax
				xor eax, D
				xor ebx, ebx
				or ebx, D
				K1 :
				cmp eax, E
					je K2
					bt A, ebx
					jc kcf1
					jmp kcf0
					kcf1 :
				inc C
					kcf0 :
				inc eax
					inc ebx
					jmp K1
					K2 :
			}
			mas[i] = C;
			C = 0;
			E = E - 8;
			D = D - 8;
		}
		for (int i = 0; i < 4; i++) {
			cout << mas[i] << ' ';
		}
	}
}