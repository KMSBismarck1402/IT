#include <bi

struct coord
{
    int x,y;
    bool operator < const(coord &b) const(return)
};
