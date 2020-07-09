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

    template <typename T>
    _int operator=(T right)
    {
        return (val = right);
    }
    _int operator=(_int right)
    {
        return (val = right.val);
    }
    template <typename T>
    _int operator+(T right)
    {
        return (val + right);
    }
    _int operator+(_int right)
    {
        return (val + right.val);
    }
    template <typename T>
    _int operator-(T right)
    {
        return (val - right);
    }
    _int operator-(_int right)
    {
        return (val - right.val);
    }
    template <typename T>
    _int operator*(T right)
    {
        return (val * right);
    }
    _int operator*(_int right)
    {
        return (val * right.val);
    }
    template <typename T>
    _int operator/(T right)
    {
        return (val / right);
    }
    _int operator/(_int right)
    {
        return (val / right.val);
    }

    template <typename T>
    _int operator+=(T right)
    {
        return (val += right);
    }
    _int operator+=(_int right)
    {
        return (val += right.val);
    }
    template <typename T>
    _int operator-=(T right)
    {
        return (val -= right);
    }
    _int operator-=(_int right)
    {
        return (val -= right.val);
    }
    template <typename T>
    _int operator*=(T right)
    {
        return (val *= right);
    }
    _int operator*=(_int right)
    {
        return (val *= right.val);
    }
    template <typename T>
    _int operator/=(T right)
    {
        return (val /= right);
    }
    _int operator/=(_int right)
    {
        return (val /= right.val);
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

    template <typename T>
    _int operator==(T right)
    {
        return val == right;
    }
    _int operator==(_int right)
    {
        return val == right.val;
    }
    template <typename T>
    _int operator!=(T right)
    {
        return !(val == right);
    }
    _int operator!=(_int right)
    {
        return !(val == right.val);
    }

    template <typename T>
    _int operator>(T right)
    {
        return val > right;
    }
    _int operator>(_int right)
    {
        return val > right.val;
    }
    template <typename T>
    _int operator<(T right)
    {
        return val < right;
    }
    _int operator<(_int right)
    {
        return val < right.val;
    }

    template <typename T>
    _int operator>=(T right)
    {
        return val >= right;
    }
    _int operator>=(_int right)
    {
        return val >= right.val;
    }
    template <typename T>
    _int operator<=(T right)
    {
        return val <= right;
    }
    _int operator<=(_int right)
    {
        return val <= right.val;
    }
};