class X;
class Y;

class X
{
private:
    Y *y;
public:
    X(/* args */){y = nullptr;};
    ~X();

};

class Y
{
private:
    X x;
public:
    Y(/* args */){};
    ~Y();
};

