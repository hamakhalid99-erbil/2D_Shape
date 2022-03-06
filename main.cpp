
#include <iostream>
#include "library.h"
int main() {
    TwoDShape::Rectangle rec1;
    TwoDShape::Circle cir1;

    rec1.A = 2;
    rec1.B = 3;
    rec1.area = TwoDShape::areaCalculation(rec1);
    rec1.length = TwoDShape::perimeterCalculation(rec1);
    TwoDShape::printOut(rec1);
    TwoDShape::Rectangle& rec1Ref = rec1;
    std::cout<< "Resized Object" <<std::endl;
    TwoDShape::objectResize(rec1Ref);
    TwoDShape::printOut(rec1);

    cir1.rad = 2;
    cir1.area = TwoDShape::areaCalculation(cir1);
    cir1.length = TwoDShape::perimeterCalculation(cir1);
    TwoDShape::printOut(cir1);
    TwoDShape::Circle& cir1Ref = cir1;
    std::cout<< "Resized Object" <<std::endl;
    TwoDShape::objectResize(cir1Ref);
    TwoDShape::printOut(cir1);

    return 0;
}
