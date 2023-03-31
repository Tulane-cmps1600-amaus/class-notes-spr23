#include <iostream>
using namespace std;
typedef struct point3D {
    double x;
    double y;
    double z;
} point3D;

class Atom {
    string name;
    point3D coords;

    public:
    Atom(string name, double x, double y, double z);
    void print();

}; // class definitions end in a semicolon