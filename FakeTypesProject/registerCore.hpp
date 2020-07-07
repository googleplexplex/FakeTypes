#pragma once
#include <iostream>
#include "dynamicArray.hpp"
using namespace std;

typedef enum typesEnum
{
    intType = 0,
    charType
};

class varInfoClass
{
public:
    void* ptr;
    typesEnum type;

    friend ostream& operator<<(ostream& out, const varInfoClass& infoClass);
};
ostream& operator<<(ostream& out, const varInfoClass& infoClass)
{
    out << "Type: ";
    if (infoClass.type == intType)
        out << typeid(int).name() << ", ";
    else if (infoClass.type == charType)
        out << typeid(char).name() << ", ";

    out << "Content: ";
    if (infoClass.type == intType)
        out << *((int*)infoClass.ptr);
    else if (infoClass.type == charType)
        out << *((char*)infoClass.ptr);

    return out;
}
dynamicArray<varInfoClass> allVaribles;

class registeredInVariblesClass
{
public:
    registeredInVariblesClass(typesEnum varType)
    {
        varInfoClass addedInfo;
        addedInfo.ptr = this;
        addedInfo.type = varType;

        allVaribles.add(addedInfo);
    }
    ~registeredInVariblesClass()
    {
        varInfoClass deletedInfo;
        deletedInfo.ptr = this;

        for (int i = 0; i < allVaribles.count; i++)
        {
            if (allVaribles[i].ptr == this)
            {
                allVaribles.delElementIn(i);
                break;
            }
        }
    }
};

#define __doc__ allVaribles


