//
// Created by pc on 6/18/2018.
//

#include "Handler.h"

Handler::Handler()
{
    next = NULL;
}

Handler::~Handler()
{

}

void Handler::setNextHandler(Handler *nextInLine)
{
    next = nextInLine;
}
