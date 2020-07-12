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
        #undef REGISTER_ALL
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
#ifdef REGISTER_CODE_INFO
    const char* name;
    int codeLine;
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

#ifdef REGISTER_CODE_INFO
    out << ", ";

    out << "Name: " << infoClass.name;

    out << ", ";

    out << "Line of code: " << infoClass.name;
#endif

    return out;
}
vector<varInfoClass> allVariables;
#define __doc__ allVariables

#ifdef REGISTER_CODE_INFO
void registerVariable(void* ptr, typesEnum varType, const char* name, int codeLine)
#else
void registerVariable(void* ptr, typesEnum varType)
#endif
{
    varInfoClass addedInfo;
    addedInfo.ptr = ptr;
    addedInfo.type = varType;
#ifdef REGISTER_ALL
    addedInfo.status = true;
#endif
#ifdef REGISTER_CODE_INFO
    addedInfo.name = name;
    addedInfo.codeLine = codeLine;
#endif

    allVariables.push_back(addedInfo);
}
void unRegisterVariable(void* ptr)
{
#ifdef REGISTER_ONLY_EXISTS
    for (int i = 0; i < allVariables.size(); i++)
    {
        if (allVariables[i].ptr == this)
        {
            allVariables.erase(allVariables.begin() + i);
            break;
        }
    }
#endif
#ifdef REGISTER_ALL
    varInfoClass deletedInfo;
    deletedInfo.ptr = ptr;

    for (int i = 0; i < allVariables.size(); i++)
    {
        if (allVariables[i].ptr == ptr)
        {
            allVariables[i].status = false;
            break;
        }
    }
#endif
}
class registerableClass
{
public:
#ifdef REGISTER_CODE_INFO
    registerableClass(typesEnum varType, const char* name, int codeLine)
    {
        registerVariable(this, varType, name, codeLine);
    }
#else
    registerableClass(typesEnum varType)
    {
        registerVariable(this, varType);
    }
#endif
    ~registerableClass()
    {
        unRegisterVariable(this);
    }
};

class registerableClassParent : registerableClass
{
public:
#ifdef REGISTER_CODE_INFO
    registerableClassParent(const char* name, int codeLine)
        : registerableClass(classType, name, codeLine) {}
#else
    registerableClassParent()
        : registerableClass(classType) {}
#endif
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