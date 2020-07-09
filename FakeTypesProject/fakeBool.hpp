#pragma once
#include "registerCore.hpp"

class fakeBool : public registerableClass
{
public:
    bool val;
    fakeBool(int _val)
        : registerableClass(boolType)
    {
        val = _val;
    }
    fakeBool()
        : registerableClass(boolType) {}

    template <typename T>
    fakeBool operator=(T right)
    {
        return (val = right);
    }
    fakeBool operator=(fakeBool right)
    {
        return (val = right.val);
    }
    template <typename T>
    fakeBool operator+(T right)
    {
        return (val + right);
    }
    fakeBool operator+(fakeBool right)
    {
        return (val + right.val);
    }
    template <typename T>
    fakeBool operator-(T right)
    {
        return (val - right);
    }
    fakeBool operator-(fakeBool right)
    {
        return (val - right.val);
    }
    template <typename T>
    fakeBool operator*(T right)
    {
        return (val * right);
    }
    fakeBool operator*(fakeBool right)
    {
        return (val * right.val);
    }
    template <typename T>
    fakeBool operator/(T right)
    {
        return (val / right);
    }
    fakeBool operator/(fakeBool right)
    {
        return (val / right.val);
    }

    template <typename T>
    fakeBool operator+=(T right)
    {
        return (val += right);
    }
    fakeBool operator+=(fakeBool right)
    {
        return (val += right.val);
    }
    template <typename T>
    fakeBool operator-=(T right)
    {
        return (val -= right);
    }
    fakeBool operator-=(fakeBool right)
    {
        return (val -= right.val);
    }
    template <typename T>
    fakeBool operator*=(T right)
    {
        return (val *= right);
    }
    fakeBool operator*=(fakeBool right)
    {
        return (val *= right.val);
    }
    template <typename T>
    fakeBool operator/=(T right)
    {
        return (val /= right);
    }
    fakeBool operator/=(fakeBool right)
    {
        return (val /= right.val);
    }

    fakeBool operator++(int right)
    {
        return val++;
    }
    fakeBool operator++()
    {
        return ++val;
    }

    template <typename T>
    fakeBool operator==(T right)
    {
        return val == right;
    }
    fakeBool operator==(fakeBool right)
    {
        return val == right.val;
    }
    template <typename T>
    fakeBool operator!=(T right)
    {
        return !(val == right);
    }
    fakeBool operator!=(fakeBool right)
    {
        return !(val == right.val);
    }

    template <typename T>
    fakeBool operator>(T right)
    {
        return val > right;
    }
    fakeBool operator>(fakeBool right)
    {
        return val > right.val;
    }
    template <typename T>
    fakeBool operator<(T right)
    {
        return val < right;
    }
    fakeBool operator<(fakeBool right)
    {
        return val < right.val;
    }

    template <typename T>
    fakeBool operator>=(T right)
    {
        return val >= right;
    }
    fakeBool operator>=(fakeBool right)
    {
        return val >= right.val;
    }
    template <typename T>
    fakeBool operator<=(T right)
    {
        return val <= right;
    }
    fakeBool operator<=(fakeBool right)
    {
        return val <= right.val;
    }
};