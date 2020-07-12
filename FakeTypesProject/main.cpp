#include <iostream>

#define REGISTER_ALL
#define REGISTER_CODE_INFO
#include "include.hpp"

using namespace std;

//fakeInt _main();
//int main()
//{
//    return _main().val;
//}
//#define main _main
//
//#define int fakeInt
//#define char fakeChar
//#define bool fakeBool
//#define float fakeFloat
//#define double fakeDouble
#define int(name) fakeInt name(#name, __LINE__)
#define char(name) fakeChar name(#name, __LINE__)
#define bool(name) fakeBool name(#name, __LINE__)
#define float(name) fakeFloat name(#name, __LINE__)
#define double(name) fakeDouble name(#name, __LINE__)

int main()
{
    int(intVar);
    intVar = 0;
    bool(boolVar);
    boolVar = true;
    cout << "1) " << __doc__;

    {
        char(charVar);
        charVar = 'A';
        intVar++;
        cout << "2) " << __doc__;

        //A(aVar);
        cout << "3) " << __doc__;
    }

    cout << "4) " << __doc__;

    return 0;
}