/*#include <iostream>
using namespace std;
int main(void) {
	long int A, B, C, P=0;
	cout << "print A: ";
	cin >> A;
	cout << "print B: ";
	cin >> B;
	cout << "print C: ";
	cin >> C;
	__asm{
		mov eax, A
		add eax, B
		mov ebx, C
		cmp eax, ebx
			mov eax, 0
		
		jne noteq
		jmp ex
		noteq:
		jl noteq1
			mov eax, 1
		jmp ex
			ex:
		mov P, eax
		}
	cout << P << endl;

}*/

