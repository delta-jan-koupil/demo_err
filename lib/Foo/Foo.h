#ifndef FOO_H
#define FOO_H

#include <Bar.h>

class Foo 
{
private:
    Bar *b;

public: 
    Foo();
    static void DoSomething();

};

#endif