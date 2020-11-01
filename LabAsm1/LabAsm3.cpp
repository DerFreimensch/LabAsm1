#include <iostream>

using namespace std;

int main() {
	long int A, B, C;
	cout << "print A: ";
	cin >> A;
	cout << "print B: ";
	cin >> B;
	cout << "print C: ";
	cin >> C;
	__asm {
		mov eax, A
		mov ebx, B
		mov ecx, C
		add eax, ebx
		add eax, ecx
		mov edx, 1
		cmp eax, edx
		mov eax, A
		jne noteq
		jmp lows
		noteq:
		jl lows
		jmp ex
		lows:
		cmp eax, ebx
		jg fstgrsec
		jl secgrfst
		fstgrsec:
		cmp ebx, ecx
		jl lowerb
		jg lowerc
		secgrfst:
		cmp eax, ecx
	    jl lowera
		jg lowerc
		lowera :
		mov eax, 0
		add eax, ebx
		add eax, ecx
		jmp ex
		lowerb:
		mov ebx, 0
		add ebx, eax
		add ebx, ecx
		jmp ex
		lowerc:
		mov ecx, 0
		add ecx, eax
		add ecx, ebx
		jmp ex
			ex:
		mov A, eax
		mov B, ebx
		mov C, ecx
	}
	cout << "A= " << A << "B= " << B << "C= " << C << endl;
}