#pragma once
#include "registerCore.hpp"

class fakeDouble : public registerableClass
{
public:
    double val;
    fakeDouble(double _val, const char* name, double codeLine)
        : registerableClass(doubleType, name, codeLine)
    {
        val = _val;
    }
    fakeDouble(const char* name, double codeLine)
        : registerableClass(doubleType, name, codeLine) {}
    fakeDouble(double _val)
        : registerableClass(doubleType, "?", -1)
    {
        val = _val;
    }
    fakeDouble()
        : registerableClass(doubleType, "?", -1) {}

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