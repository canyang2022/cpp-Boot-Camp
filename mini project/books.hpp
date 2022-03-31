//books
#include<iostream>


// Book, author, title, price, publisher and number of copies
class Books
{
public:
    std::string author;
    std::string tittle;
    Books(std::string, std::string);
    void print(){
        std::cout << author << std::endl;
        std::cout << tittle << std::endl;
    }
};
Books::Books(std::string aut, std::string titl)
{
    author= aut;
    tittle= titl;
}

// class It : public Books
// {
// public:
//     It();
// };

// It::It()
// {
//     std::string author = "Stephen King";
//     std::string tittle = "It";
//     float price = 179;
//     std::string publisher = "Viking";
//     unsigned int copies = 200;
// }

// class Hobbit : public Books
// {
// public:
//     Hobbit();
// };

// Hobbit::Hobbit()
// {
//     std::string author = "J.R.R Tolkien";
//     std::string tittle = "The Hobbit";
//     float price = 110;
//     std::string publisher = "George Allen & Unwin";
//     unsigned int copies = 200;
// }