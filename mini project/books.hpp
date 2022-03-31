//books
#include<iostream>


// Book, author, title, price, publisher and number of copies
class Books
{
protected:
    std::string author;
    std::string tittle;
    float price;
    std::string publisher;
    unsigned int copies;

public:
    Books(/* args */);
};

Books::Books()
{
}

class It : public Books
{
public:
    It(/* args */);
};

It::It()
{
}