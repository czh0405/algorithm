//
//  virtualfuncion.cpp
//  algorithm
//
//  Created by yaolao on 2020/11/24.
//  Copyright © 2020 zhihu. All rights reserved.
//

#include "virtualfuncion.h"
#include "iostream"

using namespace::std;

Base::Base()
{
    cout<<"Base ctr"<<endl;
}
 
void Base::fun1()
{
    cout<<"Base::fun1()"<<endl;
};
 
Base::~Base()
{
    cout<<"Base dtr"<<endl;
}


////
Derived::Derived()
{
    cout<<"Derived ctr"<<endl;
}
 
Derived::~Derived()
{
    cout<<"Derived dtr"<<endl;
}
 
void Derived::fun1()
{
    cout<<"Derived::fun1()"<<endl;
}


/// test function

int testVirturalOne()
{
    Derived *pD = new Derived();
    pD->fun1();
    delete pD;
     
    return 0;
}


int testVirturalTwo()
{
    Base *pD = new Derived();
    pD->fun1();
    delete pD;
     
    return 0;
}
