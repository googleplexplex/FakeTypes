#pragma once
#include "registerCore.hpp"

class _int : public registeredInVariblesClass
{
public:
    int val;
    _int(int _val)
        : registeredInVariblesClass(intType)
    {
        val = _val;
    }
    _int()
        : registeredInVariblesClass(intType) {}

    _int operator=(int right)
    {
        val = right;
        return (*this);
    }
    _int operator=(_int right)
    {
        val = right.val;
        return (*this);
    }
    _int operator+(int right)
    {
        return (val + right);
    }
    _int operator+(_int right)
    {
        return (val + right.val);
    }
    _int operator-(int right)
    {
        return (val - right);
    }
    _int operator-(_int right)
    {
        return (val - right.val);
    }

    _int operator+=(int right)
    {
        val += right;
        return (*this);
    }
    _int operator+=(_int right)
    {
        val += right.val;
        return (*this);
    }
    _int operator-=(int right)
    {
        val -= right;
        return (*this);
    }
    _int operator-=(_int right)
    {
        val -= right.val;
        return (*this);
    }

    _int operator++(int right)
    {
        return val++;
    }
    _int operator--(int right)
    {
        return val--;
    }
    _int operator++()
    {
        return ++val;
    }
    _int operator--()
    {
        return --val;
    }

    _int operator==(int right)
    {
        return val == right;
    }
    _int operator==(_int right)
    {
        return val == right.val;
    }
    _int operator!=(int right)
    {
        return !(val == right);
    }
    _int operator!=(_int right)
    {
        return !(val == right.val);
    }

    _int operator>(int right)
    {
        return val > right;
    }
    _int operator>(_int right)
    {
        return val > right.val;
    }
    _int operator<(int right)
    {
        return val < right;
    }
    _int operator<(_int right)
    {
        return val < right.val;
    }

    _int operator>=(int right)
    {
        return val >= right;
    }
    _int operator>=(_int right)
    {
        return val >= right.val;
    }
    _int operator<=(int right)
    {
        return val <= right;
    }
    _int operator<=(_int right)
    {
        return val <= right.val;
    }
};