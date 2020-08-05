#include <fstream>
#include <string>

std::ifstream this_file;
class Class_12_21
{
private:
    const std::string s;
    int ival;
    double * pdbl;
    std::ifstream &ifs;
public:
    Class_12_21(/* void */):s("Class_12_21"), ival(0), pdbl(NULL), ifs(this_file){};
    ~Class_12_21();
};