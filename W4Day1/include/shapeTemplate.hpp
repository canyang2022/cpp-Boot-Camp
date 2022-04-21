#include<iostream>
template <class T1,class T2>
void shapeComparetion(T1 object_1, T2 object_2)
{
    if((object_1.area()==object_2.area())&&(object_1.perimeter()==object_2.perimeter())){
        std::cout<<"same shape. \n";
    }else if(object_1.area()>object_2.area()){
        std::cout<<"The area of "<<object_1.name()<< " area is bigger than "<< object_2.name()<<".\n";
    }else{
        std::cout<<"The area of "<<object_2.name()<< " area is bigger than "<< object_1.name()<<".\n";
    }

}


class circle
{

public:
    double radius;
    double area(){
        return (radius*radius*3);
    }
    double perimeter(){
        return (2*radius*3);
    }
    std::string name(){
        return "circle";
    }
    circle(double rad){radius=rad;};
};

class square
{
private:
    double length;

public:
    double area(){
        return length*length;
    }
    double perimeter(){
        return (length*4);
    }
    square(double len) {
        length= len;
    };

    std::string name(){
        return "square";
    }
};

class triangle
{

    double bottom;
    double height;
    double leftLine;
    double rightLine;


public:
    triangle(double, double,double,double);
    double area(){
        return (bottom*height*0.5);
        }
    double perimeter(){
        return (leftLine+rightLine+bottom);
    }
    std::string name(){
        return "triangle";
    }

};
triangle::triangle(double bot, double hei, double ll, double rl)
{
    bottom = bot;
    height = hei;
    leftLine = ll;
    rightLine =rl;
}


class rectangle
{
private:
    double length;
    double width;

public:
    rectangle(double, double);
    double area(){
        return length*width;
    }
    double perimeter(){
        return ((length+width)*2);
    }
    std::string name(){
        return "rectangle";
    }

};
rectangle::rectangle(double len,double wid)
{
    length = len;
    width=wid;
}
