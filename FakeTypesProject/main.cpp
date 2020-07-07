#include <iostream>
using namespace std;

#include "registerCore.hpp"

#include "fakeInt.hpp"
#include "fakeChar.hpp"


_int _main();
int main()
{
    return _main().val;
}
#define main _main

#define int _int
#define char _char


int main()
{
    int i = 0;
    cout << __doc__;

    const char* str = (char*)("str");
    i++;
    cout << __doc__;

    delete str;
    cout << __doc__;

    return 0;
}