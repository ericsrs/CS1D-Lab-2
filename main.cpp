// Author : Eric Sears
// Description: Hello World in C++
//============================================================

#include <iostream>
using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);
int main()
{
    string name1 = "Eric Sears";
    hello1Function(name1);

    string name2 = "your name2";
    hello2Function(name2);

    string name3 = "your name3";
    hello2Function(name3);

    return 0;
}
