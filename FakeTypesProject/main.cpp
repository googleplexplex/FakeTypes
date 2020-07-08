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
    cout << __doc__;

    {
        char str = 'A';
        i++;
        cout << __doc__;

        A aobj;
        cout << __doc__;
    }

    cout << __doc__;

    return 0;
}