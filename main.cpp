// Author : Eric Sears, Paul Szoldra
// Description: Hello World in C++
//============================================================

#include <iostream>
using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);
int main()
{
    string name1="Eric Sears";
    hello1Function(name1);
    string name2="Kevin Azarbal";
    hello2Function(name2);

    string name3 = "your name3";
    hello2Function(name3);

    return 0;
}


// Lab 2
// hello1Function
/*
* hello2Function.cpp
*
*/
#include <iostream>
using namespace std;
int hello2Function(string name2)
{
    cout << "hello World " << name2 << endl;
    return 0;
}
