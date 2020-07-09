#pragma once
#include "registerCore.hpp"

class fakeChar : public registerableClass
{
public:
    char val;
    fakeChar(char _val)
        : registerableClass(charType)
    {
        val = _val;
    }
    fakeChar()
        : registerableClass(charType) {}

    template <typename T>
    fakeChar operator=(T right)
    {
        val = right;
        return (*this);
    }
    fakeChar operator=(fakeChar right)
    {
        val = right.val;
        return (*this);
    }
    template <typename T>
    fakeChar operator+(T right)
    {
        return (val + right);
    }
    fakeChar operator+(fakeChar right)
    {
        return (val + right.val);
    }
    template <typename T>
    fakeChar operator-(T right)
    {
        return (val - right);
    }
    fakeChar operator-(fakeChar right)
    {
        return (val - right.val);
    }
    template <typename T>
    fakeChar operator*(T right)
    {
        return (val * right);
    }
    fakeChar operator*(fakeChar right)
    {
        return (val * right.val);
    }
    template <typename T>
    fakeChar operator/(T right)
    {
        return (val / right);
    }
    fakeChar operator/(fakeChar right)
    {
        return (val / right.val);
    }

    template <typename T>
    fakeChar operator+=(T right)
    {
        return (val += right);
    }
    fakeChar operator+=(fakeChar right)
    {
        return (val += right.val);
    }
    template <typename T>
    fakeChar operator-=(T right)
    {
        return (val -= right);
    }
    fakeChar operator-=(fakeChar right)
    {
        return (val -= right.val);
    }
    template <typename T>
    fakeChar operator*=(T right)
    {
        return (val *= right);
    }
    fakeChar operator*=(fakeChar right)
    {
        return (val *= right.val);
    }
    template <typename T>
    fakeChar operator/=(T right)
    {
        return (val /= right);
    }
    fakeChar operator/=(fakeChar right)
    {
        return (val -= right.val);
    }

    fakeChar operator++(int right)
    {
        return val++;
    }
    fakeChar operator--(int right)
    {
        return val--;
    }
    fakeChar operator++()
    {
        return ++val;
    }
    fakeChar operator--()
    {
        return --val;
    }

    template <typename T>
    fakeChar operator==(T right)
    {
        return val == right;
    }
    fakeChar operator==(fakeChar right)
    {
        return val == right.val;
    }
    template <typename T>
    fakeChar operator!=(T right)
    {
        return !(val == right);
    }
    fakeChar operator!=(fakeChar right)
    {
        return !(val == right.val);
    }

    template <typename T>
    fakeChar operator>(T right)
    {
        return val > right;
    }
    fakeChar operator>(fakeChar right)
    {
        return val > right.val;
    }
    template <typename T>
    fakeChar operator<(T right)
    {
        return val < right;
    }
    fakeChar operator<(fakeChar right)
    {
        return val < right.val;
    }

    template <typename T>
    fakeChar operator>=(T right)
    {
        return val >= right;
    }
    fakeChar operator>=(fakeChar right)
    {
        return val >= right.val;
    }
    template <typename T>
    fakeChar operator<=(T right)
    {
        return val <= right;
    }
    fakeChar operator<=(fakeChar right)
    {
        return val <= right.val;
    }
};