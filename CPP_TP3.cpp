#include <iostream>
#include "point.h"

int main()
{
    point<int> pt1(12, 13);
    point<int> pt2(pt1);
    std::cout << "pt1 : " << pt1 << "\n";
    std::cout << "pt2 : " << pt2 << "\n";
}