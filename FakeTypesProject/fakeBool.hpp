#pragma once
#include "registerCore.hpp"

class fakeBool : public registerableClass
{
public:
    bool val;
    fakeBool(bool _val, const char* name, bool codeLine)
        : registerableClass(boolType, name, codeLine)
    {
        val = _val;
    }
    fakeBool(const char* name, bool codeLine)
        : registerableClass(boolType, name, codeLine) {}
    fakeBool(bool _val)
        : registerableClass(boolType, "?", -1)
    {
        val = _val;
    }
    fakeBool()
        : registerableClass(boolType, "?", -1) {}

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