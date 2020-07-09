#include <iostream>
using namespace std;

#define REGISTER_ALL
#include "registerCore.hpp"

#include "fakeInt.hpp"
#include "fakeChar.hpp"

//---
#include "mainFunctionFix.hpp"

#define int _int
#define char _char
//---

class A registered
{
};

int main()
{
    int i = 0;
    cout << "1) " << __doc__;

    {
        char str = 'A';
        i++;
        cout << "2) " << __doc__;

        A aobj;
        cout << "3) " << __doc__;
    }

    cout << "4) " << __doc__;

    return 0;
}