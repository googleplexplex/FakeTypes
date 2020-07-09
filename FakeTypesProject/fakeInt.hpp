#pragma once
#include "registerCore.hpp"

class fakeInt : public registerableClass
{
public:
    int val;
    fakeInt(int _val)
        : registerableClass(intType)
    {
        val = _val;
    }
    fakeInt()
        : registerableClass(intType) {}

    template <typename T>
    fakeInt operator=(T right)
    {
        return (val = right);
    }
    fakeInt operator=(fakeInt right)
    {
        return (val = right.val);
    }
    template <typename T>
    fakeInt operator+(T right)
    {
        return (val + right);
    }
    fakeInt operator+(fakeInt right)
    {
        return (val + right.val);
    }
    template <typename T>
    fakeInt operator-(T right)
    {
        return (val - right);
    }
    fakeInt operator-(fakeInt right)
    {
        return (val - right.val);
    }
    template <typename T>
    fakeInt operator*(T right)
    {
        return (val * right);
    }
    fakeInt operator*(fakeInt right)
    {
        return (val * right.val);
    }
    template <typename T>
    fakeInt operator/(T right)
    {
        return (val / right);
    }
    fakeInt operator/(fakeInt right)
    {
        return (val / right.val);
    }

    template <typename T>
    fakeInt operator+=(T right)
    {
        return (val += right);
    }
    fakeInt operator+=(fakeInt right)
    {
        return (val += right.val);
    }
    template <typename T>
    fakeInt operator-=(T right)
    {
        return (val -= right);
    }
    fakeInt operator-=(fakeInt right)
    {
        return (val -= right.val);
    }
    template <typename T>
    fakeInt operator*=(T right)
    {
        return (val *= right);
    }
    fakeInt operator*=(fakeInt right)
    {
        return (val *= right.val);
    }
    template <typename T>
    fakeInt operator/=(T right)
    {
        return (val /= right);
    }
    fakeInt operator/=(fakeInt right)
    {
        return (val /= right.val);
    }

    fakeInt operator++(int right)
    {
        return val++;
    }
    fakeInt operator--(int right)
    {
        return val--;
    }
    fakeInt operator++()
    {
        return ++val;
    }
    fakeInt operator--()
    {
        return --val;
    }

    template <typename T>
    fakeInt operator==(T right)
    {
        return val == right;
    }
    fakeInt operator==(fakeInt right)
    {
        return val == right.val;
    }
    template <typename T>
    fakeInt operator!=(T right)
    {
        return !(val == right);
    }
    fakeInt operator!=(fakeInt right)
    {
        return !(val == right.val);
    }

    template <typename T>
    fakeInt operator>(T right)
    {
        return val > right;
    }
    fakeInt operator>(fakeInt right)
    {
        return val > right.val;
    }
    template <typename T>
    fakeInt operator<(T right)
    {
        return val < right;
    }
    fakeInt operator<(fakeInt right)
    {
        return val < right.val;
    }

    template <typename T>
    fakeInt operator>=(T right)
    {
        return val >= right;
    }
    fakeInt operator>=(fakeInt right)
    {
        return val >= right.val;
    }
    template <typename T>
    fakeInt operator<=(T right)
    {
        return val <= right;
    }
    fakeInt operator<=(fakeInt right)
    {
        return val <= right.val;
    }
};