#pragma once
#include "registerCore.hpp"

class _char : public registerableClass
{
public:
    char val;
    _char(char _val)
        : registerableClass(charType)
    {
        val = _val;
    }
    _char()
        : registerableClass(charType) {}

    template <typename T>
    _char operator=(T right)
    {
        val = right;
        return (*this);
    }
    _char operator=(_char right)
    {
        val = right.val;
        return (*this);
    }
    template <typename T>
    _char operator+(T right)
    {
        return (val + right);
    }
    _char operator+(_char right)
    {
        return (val + right.val);
    }
    template <typename T>
    _char operator-(T right)
    {
        return (val - right);
    }
    _char operator-(_char right)
    {
        return (val - right.val);
    }
    template <typename T>
    _char operator*(T right)
    {
        return (val * right);
    }
    _char operator*(_char right)
    {
        return (val * right.val);
    }
    template <typename T>
    _char operator/(T right)
    {
        return (val / right);
    }
    _char operator/(_char right)
    {
        return (val / right.val);
    }

    template <typename T>
    _char operator+=(T right)
    {
        return (val += right);
    }
    _char operator+=(_char right)
    {
        return (val += right.val);
    }
    template <typename T>
    _char operator-=(T right)
    {
        return (val -= right);
    }
    _char operator-=(_char right)
    {
        return (val -= right.val);
    }
    template <typename T>
    _char operator*=(T right)
    {
        return (val *= right);
    }
    _char operator*=(_char right)
    {
        return (val *= right.val);
    }
    template <typename T>
    _char operator/=(T right)
    {
        return (val /= right);
    }
    _char operator/=(_char right)
    {
        return (val -= right.val);
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

    template <typename T>
    _char operator==(T right)
    {
        return val == right;
    }
    _char operator==(_char right)
    {
        return val == right.val;
    }
    template <typename T>
    _char operator!=(T right)
    {
        return !(val == right);
    }
    _char operator!=(_char right)
    {
        return !(val == right.val);
    }

    template <typename T>
    _char operator>(T right)
    {
        return val > right;
    }
    _char operator>(_char right)
    {
        return val > right.val;
    }
    template <typename T>
    _char operator<(T right)
    {
        return val < right;
    }
    _char operator<(_char right)
    {
        return val < right.val;
    }

    template <typename T>
    _char operator>=(T right)
    {
        return val >= right;
    }
    _char operator>=(_char right)
    {
        return val >= right.val;
    }
    template <typename T>
    _char operator<=(T right)
    {
        return val <= right;
    }
    _char operator<=(_char right)
    {
        return val <= right.val;
    }
};