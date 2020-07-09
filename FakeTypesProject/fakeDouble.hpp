#pragma once
#include "registerCore.hpp"

class fakeDouble : public registerableClass
{
public:
    double val;
    fakeDouble(int _val)
        : registerableClass(intType)
    {
        val = _val;
    }
    fakeDouble()
        : registerableClass(intType) {}

    template <typename T>
    fakeDouble operator=(T right)
    {
        return (val = right);
    }
    fakeDouble operator=(fakeDouble right)
    {
        return (val = right.val);
    }
    template <typename T>
    fakeDouble operator+(T right)
    {
        return (val + right);
    }
    fakeDouble operator+(fakeDouble right)
    {
        return (val + right.val);
    }
    template <typename T>
    fakeDouble operator-(T right)
    {
        return (val - right);
    }
    fakeDouble operator-(fakeDouble right)
    {
        return (val - right.val);
    }
    template <typename T>
    fakeDouble operator*(T right)
    {
        return (val * right);
    }
    fakeDouble operator*(fakeDouble right)
    {
        return (val * right.val);
    }
    template <typename T>
    fakeDouble operator/(T right)
    {
        return (val / right);
    }
    fakeDouble operator/(fakeDouble right)
    {
        return (val / right.val);
    }

    template <typename T>
    fakeDouble operator+=(T right)
    {
        return (val += right);
    }
    fakeDouble operator+=(fakeDouble right)
    {
        return (val += right.val);
    }
    template <typename T>
    fakeDouble operator-=(T right)
    {
        return (val -= right);
    }
    fakeDouble operator-=(fakeDouble right)
    {
        return (val -= right.val);
    }
    template <typename T>
    fakeDouble operator*=(T right)
    {
        return (val *= right);
    }
    fakeDouble operator*=(fakeDouble right)
    {
        return (val *= right.val);
    }
    template <typename T>
    fakeDouble operator/=(T right)
    {
        return (val /= right);
    }
    fakeDouble operator/=(fakeDouble right)
    {
        return (val /= right.val);
    }

    fakeDouble operator++(int right)
    {
        return val++;
    }
    fakeDouble operator--(int right)
    {
        return val--;
    }
    fakeDouble operator++()
    {
        return ++val;
    }
    fakeDouble operator--()
    {
        return --val;
    }

    template <typename T>
    fakeDouble operator==(T right)
    {
        return val == right;
    }
    fakeDouble operator==(fakeDouble right)
    {
        return val == right.val;
    }
    template <typename T>
    fakeDouble operator!=(T right)
    {
        return !(val == right);
    }
    fakeDouble operator!=(fakeDouble right)
    {
        return !(val == right.val);
    }

    template <typename T>
    fakeDouble operator>(T right)
    {
        return val > right;
    }
    fakeDouble operator>(fakeDouble right)
    {
        return val > right.val;
    }
    template <typename T>
    fakeDouble operator<(T right)
    {
        return val < right;
    }
    fakeDouble operator<(fakeDouble right)
    {
        return val < right.val;
    }

    template <typename T>
    fakeDouble operator>=(T right)
    {
        return val >= right;
    }
    fakeDouble operator>=(fakeDouble right)
    {
        return val >= right.val;
    }
    template <typename T>
    fakeDouble operator<=(T right)
    {
        return val <= right;
    }
    fakeDouble operator<=(fakeDouble right)
    {
        return val <= right.val;
    }
};