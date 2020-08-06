#include "13.14_Struct_Exmpl.h"

Exmpl::Exmpl()
{
    std::cout << "Exmpl()" << std::endl;
}

Exmpl::Exmpl(const Exmpl &)
{
    std::cout << "Exmpl(const Exmpl&)" << std::endl;
}