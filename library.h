//
// Created by MKJ on 2/21/2022.
//

#ifndef INC_2D_SHAPE_LIBRARY_H
#define INC_2D_SHAPE_LIBRARY_H

namespace TwoDShape{
    /**
     * The structure represents the members of the Rectangle
     */
      struct Rectangle {
         float A;   /**< (A) represents the side dimension of The rectangle*/
         float B;   /**< (B) represents the side dimension of The rectangle*/
         float area;   /**< (Area) represents Area  of The rectangle*/
         bool isInfoAreaCorrect; /**< It represents the information,if the stored area is correct or NOT */
         float length;      /**< (Length) represents the length of the rectangle perimeter*/
         bool isInfoPerCorrect;  /**< It represents the information,if the stored length of the perimeter is correct or NOT */

     };
      /**
       * The structure represents the members of the Circle
       */

     struct Circle{
         float rad;     /**< (rad) represents the size of the radius */
         float area;   /**< (Area) represents Area  of The rectangle*/
         bool isInfoAreaCorrect; /**< It represents the information,if the stored area is correct or NOT */
         float length;      /**< (Length) represents the length of the rectangle perimeter*/
         bool isInfoPerCorrect;  /**< It represents the information,if the stored length of the perimeter is correct or NOT */
     };


     float areaCalculation(float A, float B);
     float areaCalculation(float rad);
     float areaCalculation(Rectangle &rec1);
     float areaCalculation (Circle &cir1);



    float perimeterCalculation(float A,float B);
    float perimeterCalculation(float rad);
    float perimeterCalculation(Rectangle &rec1);
    float perimeterCalculation(Circle &cir1);

    float objectResize(Rectangle &rec1, int n = 2);
    float objectResize(Circle &cir1, int n =2);



     void printOut(Rectangle &rec1);
     void printOut(Circle &cir1);


}

#endif //INC_2D_SHAPE_LIBRARY_H
