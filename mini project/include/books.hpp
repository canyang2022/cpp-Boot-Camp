#ifndef BOOKS_HPP
#define BOOKS_HPP

#include<iostream>
#define LIBRARY_SIZE 50

// Book, author, title, price, publisher and number of copies
class Book
{

public:
    std::string authorfirst;
    std::string authorsecond;
    std::string tittle;
    std::string publish_name;
    float price;
    unsigned int copies;

    Book();
};



#endif