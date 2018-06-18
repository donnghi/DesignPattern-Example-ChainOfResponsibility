#include <iostream>
#include <string>
#include <memory>

#include "Handler.h"
#include "SpecialHandler.h"

using namespace std;

int main() {

    Handler *h1 = new SpecialHandler(10, 1);
    Handler *h2 = new SpecialHandler(20, 2);
    Handler *h3 = new SpecialHandler(30, 3);

    h1->setNextHandler(h2);
    h2->setNextHandler(h3);

    h1->request(18);
    h1->request(40);

    delete h1;
    delete h2;
    delete h3;

    return 0;
}