/*#include <iostream>

using namespace std;

int main(void) {
	int j[10];
	for (int i = 0; i < 10; i++) {
		cin >> j[i];
	}
	__asm{
		mov esi, 0
		cycle :
		mov eax, j[esi * 4]
			cmp eax, 0
			jl lowerthennull
			jmp go
			lowerthennull :
		imul eax, -2
			mov j[esi * 4], eax
			go :
		inc esi
			cmp esi, 10
			je ex
			loop cycle
			ex:

	}
	for (int i = 0; i < 10; i++) {
		cout << j[i] ;
	}
	cout << endl;
}*/