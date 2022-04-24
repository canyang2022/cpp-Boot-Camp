#include "books.hpp"

void book_display(Book* book){
    std::cout<< "We found the book you are searching\n";
    std::cout << "The book name is: "<<book->tittle << '\n';
    std::cout << "The author name is: "<<book->authorfirst<<" "<<book->authorsecond << '\n';
    std::cout << "The publisher is: "<<book->publish_name << '\n';
    std::cout << "The price is: "<<book->price << " kr"<< '\n';
    std::cout << "The copy is: "<< book->copies<<'\n';
}


