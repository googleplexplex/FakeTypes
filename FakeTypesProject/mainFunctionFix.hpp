#pragma once
#include "fakeInt.hpp"

fakeInt _main();
int main()
{
    return _main().val;
}
#define main _main