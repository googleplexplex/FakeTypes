#pragma once
#include "registerCore.hpp"

class fakeFloat : public registerableClass
{
public:
    float val;
    fakeFloat(int _val)
        : registerableClass(floatType)
    {
        val = _val;
    }
    fakeFloat()
        : registerableClass(floatType) {}

    template <typename T>
    fakeFloat operator=(T right)
    {
        return (val = right);
    }
    fakeFloat operator=(fakeFloat right)
    {
        return (val = right.val);
    }
    template <typename T>
    fakeFloat operator+(T right)
    {
        return (val + right);
    }
    fakeFloat operator+(fakeFloat right)
    {
        return (val + right.val);
    }
    template <typename T>
    fakeFloat operator-(T right)
    {
        return (val - right);
    }
    fakeFloat operator-(fakeFloat right)
    {
        return (val - right.val);
    }
    template <typename T>
    fakeFloat operator*(T right)
    {
        return (val * right);
    }
    fakeFloat operator*(fakeFloat right)
    {
        return (val * right.val);
    }
    template <typename T>
    fakeFloat operator/(T right)
    {
        return (val / right);
    }
    fakeFloat operator/(fakeFloat right)
    {
        return (val / right.val);
    }

    template <typename T>
    fakeFloat operator+=(T right)
    {
        return (val += right);
    }
    fakeFloat operator+=(fakeFloat right)
    {
        return (val += right.val);
    }
    template <typename T>
    fakeFloat operator-=(T right)
    {
        return (val -= right);
    }
    fakeFloat operator-=(fakeFloat right)
    {
        return (val -= right.val);
    }
    template <typename T>
    fakeFloat operator*=(T right)
    {
        return (val *= right);
    }
    fakeFloat operator*=(fakeFloat right)
    {
        return (val *= right.val);
    }
    template <typename T>
    fakeFloat operator/=(T right)
    {
        return (val /= right);
    }
    fakeFloat operator/=(fakeFloat right)
    {
        return (val /= right.val);
    }

    fakeFloat operator++(int right)
    {
        return val++;
    }
    fakeFloat operator--(int right)
    {
        return val--;
    }
    fakeFloat operator++()
    {
        return ++val;
    }
    fakeFloat operator--()
    {
        return --val;
    }

    template <typename T>
    fakeFloat operator==(T right)
    {
        return val == right;
    }
    fakeFloat operator==(fakeFloat right)
    {
        return val == right.val;
    }
    template <typename T>
    fakeFloat operator!=(T right)
    {
        return !(val == right);
    }
    fakeFloat operator!=(fakeFloat right)
    {
        return !(val == right.val);
    }

    template <typename T>
    fakeFloat operator>(T right)
    {
        return val > right;
    }
    fakeFloat operator>(fakeFloat right)
    {
        return val > right.val;
    }
    template <typename T>
    fakeFloat operator<(T right)
    {
        return val < right;
    }
    fakeFloat operator<(fakeFloat right)
    {
        return val < right.val;
    }

    template <typename T>
    fakeFloat operator>=(T right)
    {
        return val >= right;
    }
    fakeFloat operator>=(fakeFloat right)
    {
        return val >= right.val;
    }
    template <typename T>
    fakeFloat operator<=(T right)
    {
        return val <= right;
    }
    fakeFloat operator<=(fakeFloat right)
    {
        return val <= right.val;
    }
};