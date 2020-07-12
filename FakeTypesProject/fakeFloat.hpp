#pragma once
#include "registerCore.hpp"

class fakeFloat : public registerableClass
{
public:
    float val;
    fakeFloat(float _val, const char* name, float codeLine)
        : registerableClass(floatType, name, codeLine)
    {
        val = _val;
    }
    fakeFloat(const char* name, float codeLine)
        : registerableClass(floatType, name, codeLine) {}
    fakeFloat(float _val)
        : registerableClass(floatType, "?", -1)
    {
        val = _val;
    }
    fakeFloat()
        : registerableClass(floatType, "?", -1) {}

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