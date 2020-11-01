

/*#include <iostream>

using namespace std;

int main()
{
    long int a, b;
    cout << "Print A\n";
    cin >> a;
    cout << "Print B\n";
    cin >> b;
    //-2^31<=(2A^2+11A)/b<=2^31-1
    // -2^31<=b<=2^31-1 b!=0
    // (-2^31)/11<=b<=(2^31-1)/11
    __asm {
        mov eax, a
        mov ebx, 11
        mul ebx
        mov ecx, eax
        mov eax,2
        mul a
        mul a
        add eax,ecx
        div b
        mov a, eax
        mov b, edx
    }
    cout << "Celoe: " << a << " " << "Ostatok: " << b << endl;
}*/
