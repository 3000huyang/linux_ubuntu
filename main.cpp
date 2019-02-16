#include <iostream>

#include <boost/any.hpp>

#include "HelloConfig.h"

using namespace std;

int main()
{
    cout << "Version : "<<HELLO_VERSION_MAJOR <<"."<<HELLO_VERSION_MINOR<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
