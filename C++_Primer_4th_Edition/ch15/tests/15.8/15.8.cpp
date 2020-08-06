#include "../../15.8.h"

int main(void)
{
    base bobj("base obj");
    derived dobj(10);
    base *bp1 = &bobj;
    base &br1 = bobj;

    base *bp2 = &dobj;
    base &br2 = dobj;

    std::cout << "bobj.print():";
    bobj.print(std::cout);
    std::cout << std::endl;

    std::cout << "dobj.print():";
    dobj.print(std::cout);
    std::cout << std::endl;

    std::cout << "bp1->name():" << bp1->name() << std::endl;

    std::cout << "bp2->name():" << bp2->name() << std::endl;

    std::cout << "br1.print():";
    br1.print(std::cout);
    std::cout << std::endl;

    std::cout << "br2.print():";
    br2.print(std::cout);
    std::cout << std::endl;
    return 0;
}
