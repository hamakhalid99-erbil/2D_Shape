//
// Created by MKJ on 2/21/2022.
//

#include <iostream>
#include "library.h"
#define PI 3.14159267



/**
 * The function calculates the (Area) of rectangle.
 * @param A Represents One side of the Rectangle
 * @param B Represents One side of the Rectangle
 * @return The Area of the Rectangle
 */
float TwoDShape::areaCalculation(float A, float B) {
    return A * B ;
}

/**
 * The function calculates the (Area) of Circle
 * @param rad Represents a straight line from the centre to the circumference of a circle or sphere.
 * @return The Area of Circle
 */
float TwoDShape::areaCalculation(float rad) {
    return PI * rad * rad ;
}


/**
 * The Function will take a Reference to the Structure of Rectangle as a parameter, then Returns the (Area) of Rectangle
 * @param rec1 It is A reference to the structure of the rectangle
 * @return The Area of the Rectangle
 */
float TwoDShape::areaCalculation(TwoDShape::Rectangle &rec1) {
    rec1.area = TwoDShape::areaCalculation(rec1.A, rec1.B);
    if(rec1.area >0)
    {
        rec1.isInfoAreaCorrect = true;
        return rec1.area;
    }else
    {
        rec1.isInfoAreaCorrect = false;
        rec1.area  = 0;
        return rec1.area;
    }

}

/**
 *  The Function will take a Reference to the Structure of Circle as a parameter, then Returns the (Area) of Circle
 * @param cir1 It is A reference to the structure of the Circle
 * @return The Area of the Circle
 */
float TwoDShape::areaCalculation(TwoDShape::Circle &cir1) {
    cir1.area = TwoDShape::areaCalculation(cir1.rad);
    if(cir1.area >0)
    {
        cir1.isInfoAreaCorrect = true;
        return cir1.area;
    }else
    {
        cir1.isInfoAreaCorrect = false;
        cir1.area  = 0;
        return cir1.area;
    }

}

/**
 * The function calculates the (Perimeter) of rectangle
 * @param A Represents One side of the Rectangle
 * @param B Represents One side of the Rectangle
 * @return The Perimeter of the Rectangle
 */

float TwoDShape::perimeterCalculation(float A, float B) {
    return 2 * (A + B);
}

/**
 * The function calculates the (Perimeter) of Circle
 * @param rad Represents a straight line from the centre to the circumference of a circle or sphere.
 * @return The Perimeter of Circle
 */

float TwoDShape::perimeterCalculation(float rad) {
    return 2 * PI * rad;
}


/**
 * The Function will take a Reference to the Structure of Rectangle as a parameter, then Returns the (Perimeter) of Rectangle
 * @param rec1 It is A reference to the structure of the rectangle
 * @return The Perimeter of the Rectangle
 */
float TwoDShape::perimeterCalculation(TwoDShape::Rectangle &rec1) {
    rec1.length = TwoDShape::perimeterCalculation(rec1.A,rec1.B);
    if(rec1.length >0)
    {
        rec1.isInfoPerCorrect = true;
        return rec1.length;
    }else
    {
        rec1.isInfoAreaCorrect = false;
        rec1.length  = 0;
        return rec1.length;
    }


}
/**
 *  The Function will take a Reference to the Structure of Circle as a parameter, then Returns the (Perimeter) of Circle
 * @param cir1 It is A reference to the structure of the Circle
 * @return The Perimeter of the Circle
 */
float TwoDShape::perimeterCalculation(TwoDShape::Circle &cir1) {
    cir1.length = TwoDShape::perimeterCalculation(cir1.rad);
    if(cir1.length >0)
    {
        cir1.isInfoPerCorrect = true;
        return cir1.length;
    }else
    {
        cir1.isInfoAreaCorrect = false;
        cir1.length  = 0;
        return cir1.length;
    }

}

/**
 * The function will multiply each side by the multiple constant with the default value as a parameter.
 * @param rec1 A Reference to Rectangle structure that has all the parameters
 * @param n Default value (n=2)
 */
float TwoDShape::objectResize(TwoDShape::Rectangle &rec1, int n) {
    rec1.A = rec1.A * n;
    rec1.B = rec1.B *n;
    rec1.area = TwoDShape::areaCalculation(rec1.A, rec1.B);
    rec1.length = TwoDShape::perimeterCalculation(rec1.A,rec1.B);
}

/**
 * The function will multiply Radius by the multiple constant with the default value as a parameter
 * @param cir1 A Reference to Circle structure that has all the parameters
 * @param n Default value (n=2)
 */
float TwoDShape::objectResize(TwoDShape::Circle &cir1, int n) {
    cir1.rad = cir1.rad *n;
    cir1.length = TwoDShape::perimeterCalculation(cir1.rad);
    cir1.area = TwoDShape::areaCalculation(cir1.rad);

}

/**
 * The Function takes the Responsibilities of printing out all of the Rectangle information
 * @param rec1 The structure that covers all Rectangle's Parameter
 */
void TwoDShape::printOut(TwoDShape::Rectangle &rec1) {
    std::cout<< "Rectangle: " <<std::endl;
    std::cout << "Side A = " << rec1.A << std::endl;
    std::cout<< "Side B = " <<rec1.B<<std::endl;
    std::cout<< "Area =  " <<rec1.area<<std::endl;
    std::cout<< "Length of the Rectangle =   " <<rec1.length<<std::endl;
    std::cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<std::endl;
}
/**
 *  The Function takes the Responsibilities of printing out all of the Circle information
 * @param cir1 The structure that covers all Circle's Parameter
 */
void TwoDShape::printOut(TwoDShape::Circle &cir1) {
    std::cout<< "Circle: " <<std::endl;
    std::cout<< "Radius = " <<cir1.rad<< std::endl;
    std::cout<< "Area = " <<cir1.area<< std::endl;
    std::cout<< "Length of the Circle = " <<cir1.length<< std::endl;
    std::cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<std::endl;
}








