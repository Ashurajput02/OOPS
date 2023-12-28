#include <iostream>
using namespace std;

class area

{

    // dimensions of figure

    double dim1, dim2;

public:
    void setarea(double d1, double d2)
    {
        dim1 = d1;
        dim2 = d2;
    }

    void getdim(double &d1, double &d2);

    virtual double getarea() = 0;

    // Must override this function
};

class rectangle : public area
{

    void getarea()
    {
    }
};
