/*Implement an interface for shape, and derive circle, triangle, rectangle, square as children. Overload all three
comparison operators to compare the shapes based on their area -- if equal then their perimeter should be
considered. Only, and if only both area and perimeter are equal then the objects should be considered equal.*/
#include<iostream>

class shape
{
public:
    virtual double area()=0;
    virtual double perimeter()=0;
public:
    shape();
    void printArea(){
        std::cout<<"the area is "<< area()<<std::endl;
    }
    void printPerimeter(){
        std::cout<<"the perimeter is "<< area()<<std::endl;
    }

    friend bool operator==(const shape& a, const shape& b){
        if(a==b){
            return 1;
        }
    }
    friend bool operator>(const shape& a, const shape& b){
        if(a>b){
            return 0;
        }
    }
    friend bool operator<(const shape& a, const shape& b){
        if(a<b){
            return 0;
        }
    }
};
shape::shape(/* args */)
{
}


class circle : public shape
{

public:
    circle(double);
    double radius;
    double area(){
        return (radius*radius*3);
    }
    double perimeter(){
        return (2*radius*3);
    }
};
circle::circle(double rad)
{
    radius=rad;
};


class triangle : public shape
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

};
triangle::triangle(double bot, double hei, double ll, double rl)
{
    bottom = bot;
    height = hei;
    leftLine = ll;
    rightLine =rl;
}


class rectangle : public shape
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
};
rectangle::rectangle(double len,double wid)
{
    length = len;
    width=wid;
}


class sqaure : public shape
{
private:
    double length;

public:
    sqaure(double);
    double area(){
        return length*length;
    }
    double perimeter(){
        return (length*4);
    }
};

sqaure::sqaure(double len)
{
    length= len;
}


int main(){

    circle c(3);
    sqaure sqa(3);
    rectangle rec(3,1);
    triangle tri(2,4,6,2);

    if((c.area()==sqa.area()) && (c.perimeter()==c.perimeter())){
        std::cout<<"100000";
    }

    shape *s[4] = {
        new circle(3),
        new sqaure(2),
        new rectangle(3,1),
        new triangle(2,4,6,2)
    };

    for(int i =0; i< 4; i++){
        for(int j =0;j<4;j++){
            if((s[i]->area()==s[j]->area())&&(s[i]->perimeter()==s[j]->perimeter())){
                std::cout<<"equal"<<std::endl;
            }
        }
    }

}