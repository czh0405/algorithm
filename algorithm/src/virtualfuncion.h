//
//  virtualfuncion.hpp
//  algorithm
//
//  Created by yaolao on 2020/11/24.
//  Copyright © 2020 zhihu. All rights reserved.
//

#ifndef virtualfuncion_hpp
#define virtualfuncion_hpp

class Base
{
public:
    Base();
    virtual ~Base();
    virtual void fun1();
    
};


class Derived:public Base
{
public:
    Derived();
    ~Derived();
    void fun1();
};

int testVirturalOne();
int testVirturalTwo();
int testVirturalThr();

#endif /* virtualfuncion_hpp */
