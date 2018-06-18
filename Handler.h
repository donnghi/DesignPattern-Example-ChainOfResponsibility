//
// Created by pc on 6/18/2018.
//

#ifndef CHAINOFRESPONSIBILITYDESIGNPATTERN_HANDLER_H
#define CHAINOFRESPONSIBILITYDESIGNPATTERN_HANDLER_H

#include <iostream>

class Handler
{
protected:
    Handler *next;
public:
    Handler();
    virtual ~Handler();
    virtual void request(int value) = 0;
    void setNextHandler(Handler *nextInLine);
};


#endif //CHAINOFRESPONSIBILITYDESIGNPATTERN_HANDLER_H
