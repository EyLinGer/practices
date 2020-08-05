class NoDefault
{
private:
    int ival;
public:
    NoDefault(int iv);
};

NoDefault::NoDefault(int iv)
{
    ival = iv;
}



class C
{
private:
    NoDefault nd;
public:
    C(/* void */):nd(0){};
};
