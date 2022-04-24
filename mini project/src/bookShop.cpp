#include<iostream>
#include "books.hpp"


// Book, author, title, price, publisher and number of copies
Book::Book()
{
    std::cout << "Enter Author First Name: ";
    std::cin >> authorfirst;
    std::cout << "Enter Author Second Name: ";
    std::cin >> authorsecond;
    std::cout << "Enter Tittle Name: ";
    std::cin >> tittle;
    std::cout << "Enter Publisher Name: ";
    std::cin >> publish_name;
    std::cout << "Enter Price: ";
    std::cin >> price;
    std::cout << "Enter numbers of copies: ";
    std::cin >> copies;

}


