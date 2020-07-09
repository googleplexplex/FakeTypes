#include <iostream>
#define REGISTER_ALL
#include "include.hpp"
using namespace std;


class A registered
{
};


int main()
{
    int intVar = 0;
    bool boolVar = true;
    cout << "1) " << __doc__;

    {
        char str = 'A';
        intVar++;
        cout << "2) " << __doc__;

        A aVar;
        cout << "3) " << __doc__;
    }

    cout << "4) " << __doc__;

    return 0;
}