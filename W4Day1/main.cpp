/* Use this tutorial (use g++ instead of gcc) to generate a shared object from the template Shape Assignment. Then
write another application which uses the share object and creates a comparison between shapes.*/
/*Write a function template which receives two of any shapes from last week’s assignment, compares them, and
printsouttheresult.*/
/*Can Yang*/

#include "shapeTemplate.hpp"

int main(){
    circle c1(2),c2(3);
    square s1(8);
    rectangle r1(6,10);
    shapeComparetion<circle, square>(c1, s1);
    shapeComparetion<rectangle, square>(r1, s1);
    shapeComparetion<circle, circle>(c2, c2);
    std::cout<< "I dont like this solution but no more time for better one.";


}


