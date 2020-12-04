/*#include <iostream>

using namespace std;

int main(void) {
	unsigned long A;
	unsigned long B = 0, C;
	cin >> A;
	if (A < 65535) {
		C = 2;
	}else{
		C = 4;
	}
		__asm {
			mov eax,0
			mov ecx, 1
			mov ebx, 0
			xor edx, edx
			L1 :
			cmp eax, C
				je L2
			cmp ebx, 8
				jne ent
				add eax, 1
				mov ecx, 1
				mov ebx, 0
				ent:
				bt A, ecx
				
				jc cf1
				sal B, 1
				jmp cf0
				cf1 :
			sal B, 1
				or B, 1
					cf0 :
				dec ecx
				cmp ecx, ebx
				je L1
				add ecx, 4
				add ebx, 2
				jmp L1
				L2 :


			//mov B, edx
		}
	cout << B << endl;
	return 0;
}*/