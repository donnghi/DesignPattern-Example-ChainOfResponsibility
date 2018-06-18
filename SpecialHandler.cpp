//
// Created by pc on 6/18/2018.
//

#include "SpecialHandler.h"

void SpecialHandler::request(int value)
{
    if (value < myLimit)
    {
        std::cout << "Handler " << myId << " handled the request with a limit of " << myLimit << std::endl;
    } else if (next != NULL)
    {
        next->request(value);
    } else
    {
        std::cout << "Cannot find id " << value << std::endl;
    }
}
