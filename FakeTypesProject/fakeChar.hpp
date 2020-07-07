#pragma once
#include "registerCore.hpp"

class _char : public registeredInVariblesClass
{
public:
    char val;
    _char(char _val)
        : registeredInVariblesClass(charType)
    {
        val = _val;
    }
    _char()
        : registeredInVariblesClass(charType) {}

    _char operator=(char right)
    {
        val = right;
        return (*this);
    }
    _char operator=(_char right)
    {
        val = right.val;
        return (*this);
    }
    _char operator+(char right)
    {
        return (val + right);
    }
    _char operator+(_char right)
    {
        return (val + right.val);
    }
    _char operator-(char right)
    {
        return (val - right);
    }
    _char operator-(_char right)
    {
        return (val - right.val);
    }

    _char operator+=(char right)
    {
        val += right;
        return (*this);
    }
    _char operator+=(_char right)
    {
        val += right.val;
        return (*this);
    }
    _char operator-=(char right)
    {
        val -= right;
        return (*this);
    }
    _char operator-=(_char right)
    {
        val -= right.val;
        return (*this);
    }

    _char operator++(int right)
    {
        return val++;
    }
    _char operator--(int right)
    {
        return val--;
    }
    _char operator++()
    {
        return ++val;
    }
    _char operator--()
    {
        return --val;
    }

    _char operator==(char right)
    {
        return val == right;
    }
    _char operator==(_char right)
    {
        return val == right.val;
    }
    _char operator!=(char right)
    {
        return !(val == right);
    }
    _char operator!=(_char right)
    {
        return !(val == right.val);
    }

    _char operator>(char right)
    {
        return val > right;
    }
    _char operator>(_char right)
    {
        return val > right.val;
    }
    _char operator<(char right)
    {
        return val < right;
    }
    _char operator<(_char right)
    {
        return val < right.val;
    }

    _char operator>=(char right)
    {
        return val >= right;
    }
    _char operator>=(_char right)
    {
        return val >= right.val;
    }
    _char operator<=(char right)
    {
        return val <= right;
    }
    _char operator<=(_char right)
    {
        return val <= right.val;
    }
};