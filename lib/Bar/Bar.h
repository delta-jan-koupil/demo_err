#ifndef BAR_H
#define BAR_H

#include <Foo.h>

class Bar 
{
public: 
    void run()
    {
        Foo::DoSomething();
    }
};

#endif