#pragma once

#include "registerCore.hpp"

#include "fakeInt.hpp"
#include "fakeChar.hpp"
#include "fakeBool.hpp"
#include "fakeFloat.hpp"
#include "fakeDouble.hpp"

#include "mainFunctionFix.hpp"

#define int fakeInt
#define char fakeChar
#define bool fakeBool
#define float fakeFloat
#define double fakeDouble