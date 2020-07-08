#pragma once
#include "registerCore.hpp"

class _int : public registerableClass
{
public:
    int val;
    _int(int _val)
        : registerableClass(intType)
    {
        val = _val;
    }
    _int()
        : registerableClass(intType) {}

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