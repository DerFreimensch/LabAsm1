

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
<<<<<<< HEAD
        mul a
        mul a
        add eax,ecx
        div b
=======
        imul a
        imul a
        add eax,ecx
        cdq
        idiv b
>>>>>>> 912a57ff07dd318351f538be5aeff2d5d9e2438f
        mov a, eax
        mov b, edx
    }
    cout << "Celoe: " << a << " " << "Ostatok: " << b << endl;
}*/
