#pragma once
#include <iostream>
#include <vector>
using namespace std;

#ifndef REGISTER_ONLY_EXISTS
    #ifndef REGISTER_ALL
        #define REGISTER_ONLY_EXISTS
    #endif
#endif

#ifdef REGISTER_ONLY_EXISTS
    #ifdef REGISTER_ALL
        #define REGISTER_ONLY_EXISTS
    #endif
#endif

typedef enum typesEnum
{
    intType = 0,
    charType,
    floatType,
    doubleType,
    boolType,
    classType
};


class varInfoClass
{
public:
    void* ptr;
    typesEnum type;
#ifdef REGISTER_ALL
    bool status;
#endif

    friend ostream& operator<<(ostream& out, const varInfoClass& infoClass);
};
ostream& operator<<(ostream& out, const varInfoClass& infoClass)
{
    out << "Type: ";
    if (infoClass.type == intType)
        out << "int";
    else if (infoClass.type == charType)
        out << "char";
    else if (infoClass.type == floatType)
        out << "float";
    else if (infoClass.type == doubleType)
        out << "double";
    else if (infoClass.type == boolType)
        out << "bool";
    else if (infoClass.type == classType)
        out << "class";
    else
        out << "?";

    out << ", ";

    out << "Content: ";
    if (infoClass.type == intType)
        out << *((int*)infoClass.ptr);
    else if (infoClass.type == charType)
        out << *((char*)infoClass.ptr);
    else if (infoClass.type == floatType)
        out << *((float*)infoClass.ptr);
    else if (infoClass.type == doubleType)
        out << *((double*)infoClass.ptr);
    else if (infoClass.type == boolType)
        out << *((bool*)infoClass.ptr);
    else
        out << "?";

#ifdef REGISTER_ALL
    out << ", ";

    out << "Status: ";
    if (infoClass.status)
        out << "Used";
    else
        out << "Deleted";
#endif

    return out;
}
vector<varInfoClass> allVaribles;
#define __doc__ allVaribles

class registerableClass
{
public:
    registerableClass(typesEnum varType)
    {
        varInfoClass addedInfo;
        addedInfo.ptr = this;
        addedInfo.type = varType;
#ifdef REGISTER_ALL
        addedInfo.status = true;
#endif

        allVaribles.push_back(addedInfo);
    }
    ~registerableClass()
    {
#ifdef REGISTER_ONLY_EXISTS
        varInfoClass deletedInfo;
        deletedInfo.ptr = this;

        for (int i = 0; i < allVaribles.size(); i++)
        {
            if (allVaribles[i].ptr == this)
            {
                allVaribles.erase(allVaribles.begin() + i);
                break;
            }
        }
#endif
#ifdef REGISTER_ALL
        varInfoClass deletedInfo;
        deletedInfo.ptr = this;

        for (int i = 0; i < allVaribles.size(); i++)
        {
            if (allVaribles[i].ptr == this)
            {
                allVaribles[i].status = false;
                break;
            }
        }
#endif
    }
};

class registerableClassParent : registerableClass
{
public:
    registerableClassParent()
        : registerableClass(classType)
    {}
};
#define registered : registerableClassParent


string vectorCoutSeparator = ",\n";
string vectorCoutEnd = "\n";
template <typename T>
std::ostream& operator<<(std::ostream& out, std::vector<T>& const showedVector) noexcept
{
    out << "[";

    int showedVectorSize = showedVector.size();
    for (int i = 0; i < showedVectorSize; i++)
    {
        out << showedVector[i];

        if (i != showedVectorSize - 1)
            out << vectorCoutSeparator;
    }

    out << "]" << vectorCoutEnd << endl;

    return out;
}