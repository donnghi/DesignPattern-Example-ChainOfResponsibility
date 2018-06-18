//
// Created by pc on 6/18/2018.
//

#ifndef CHAINOFRESPONSIBILITYDESIGNPATTERN_SPECIALHANDLER_H
#define CHAINOFRESPONSIBILITYDESIGNPATTERN_SPECIALHANDLER_H

#include "Handler.h"
#include <iostream>


class SpecialHandler : public Handler
{
protected:
    int myLimit;
    int myId;
public:
    SpecialHandler(int limit, int id) : myLimit(limit), myId(id) {}
    virtual ~SpecialHandler() {};
    void request(int value) override;
};



#endif //CHAINOFRESPONSIBILITYDESIGNPATTERN_SPECIALHANDLER_H
