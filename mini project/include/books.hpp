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



void meny_display();
Book* search_books(int bookmark, Book** library, std::string tittle, std::string author_fir_name,std::string author_sec_name );
void book_display(Book* book);
Book* search_books_with_tittle(int bookmark, Book** library, std::string tittle);
#endif