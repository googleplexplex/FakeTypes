#pragma once
#include "fakeInt.hpp"

_int _main();
int main()
{
    return _main().val;
}
#define main _main